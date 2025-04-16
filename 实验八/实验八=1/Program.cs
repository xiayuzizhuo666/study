using System;

namespace 实验八_1
{
    interface Ipolygon
    {
        void draw();

    }
    class Circle : Ipolygon
    {
        public void draw()
        {
            Console.WriteLine("圆形绘制");
        }

    }
    class Rect : Ipolygon
    {
        public void draw()
        {
            Console.WriteLine("矩形绘制");
        }
    }
        class Program
    {
        static void Main(string[] args)
        {
            Circle cir = new Circle();
            Rect re = new Rect();
            cir.draw();
            re.draw();
            Console.ReadKey();
        
        }
    }
}
