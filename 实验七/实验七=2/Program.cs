using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


// 抽象图形基类
public abstract class Figure
{
    // 抽象方法声明：计算面积
    public abstract double Area();
}

// 矩形类
public class Rectangle : Figure
{
    private double _length;
    private double _width;

    // 构造函数初始化长宽
    public Rectangle(double length, double width)
    {
        _length = length;
        _width = width;
    }

    // 重写面积计算方法
    public override double Area()
    {
        return _length * _width;
    }
}

// 圆形类
public class Circle : Figure
{
    private double _radius;

    // 构造函数初始化半径
    public Circle(double radius)
    {
        _radius = radius;
    }

    // 重写面积计算方法
    public override double Area()
    {
        return Math.PI * _radius * _radius;
    }
}

class Program
{
    static void Main(string[] args)
    {
        // 创建矩形实例
        Figure rect = new Rectangle(5, 3);
        Console.WriteLine($"矩形面积：{rect.Area():F2}");  // 输出：15.00

        // 创建圆形实例
        Figure circle = new Circle(4);
        Console.WriteLine($"圆形面积：{circle.Area():F2}"); // 输出：50.27
    }
}

