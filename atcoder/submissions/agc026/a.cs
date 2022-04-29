using System;
using System.Buffers.Text;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace AtCoder
{
  class Program
  {
    static void Main()
    {
      int n = int.Parse(Console.ReadLine());
      int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
      int ans = 0;
      int cur = -1;
      for(int i = 0; i < n; i++) {
        if(a[i] == cur){
          cur = -1;
          ans++;
          continue;
        }
        cur = a[i];
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
