// Time.cs
using System;

namespace 实验六_3
{
    public class Time
    {
        public int Hour { get; private set; }
        public int Minute { get; private set; }
        public int Second { get; private set; }

        public Time()
        {
            RefreshCurrentTime();
        }

        public void RefreshCurrentTime()
        {
            Hour = DateTime.Now.Hour;
            Minute = DateTime.Now.Minute;
            Second = DateTime.Now.Second;
        }

        public void AddSecond()
        {
            Second++;
            if (Second < 60) return;

            Second = 0;
            Minute++;
            if (Minute < 60) return;

            Minute = 0;
            Hour = ++Hour % 24;
        }
    }
}


