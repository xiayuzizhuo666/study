using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


public class Adder
{
    // 私有字段
    private int _number1;
    private int _number2;

    // 读写属性封装字段
    public int Number1
    {
        get { return _number1; }
        set { _number1 = value; }
    }

    public int Number2
    {
        get { return _number2; }
        set { _number2 = value; }
    }

    // 带参数的构造方法
    public Adder(int number1, int number2)
    {
        _number1 = number1;
        _number2 = number2;
    }

    // 求和方法
    public int Sum()
    {
        return _number1 + _number2;
    }
}
