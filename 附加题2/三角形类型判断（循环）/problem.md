 # 三角形类型判断（循环）  
  
 ## 题目描述  
 输入三个数，判定是否构成三角形。如果构成三角形，判定三角形类型，并计算三角形面积。  
   
 三角形类型如下:  
 等腰三角形：isosceles triangle  
 直角三角形：right triangle  
 等腰直角三角形：isosceles right triangle  
 等边三角型：equilateral triangle  
 一般三角形：general triangle  
 不能构成三角形：no triangle  
 假设a,b,c为三角形三条边，三角形面积计算公式如下：  
 p = (a+b+c)/2;  
 s = √(p(p-a)(p-b)(p-c))  
   
   
 提示：两个浮点数由于计算机内部表示的原因可能略有微小的误差,不能用==判定相等。浮点数判定相等用|a-b|<e , e为足够小的数，假设0.001。C语言中绝对值函数原型是：double fabs(double x)，头文件math.h。  
 ## 输入  
 测试次数n  
 后跟n行，每行一组测试数据：数1 数2 数3  
 ## 输出  
 对每组测试数据，输出三角形类型。如果是三角形，类型后输出三角形面积（保留1位小数）。  
 ## 样例输入  
 3  
 3.0 2.0 6.0  
 3.0 4.0 5.0  
 1.0 1.0 1.414  
 ## 样例输出  
 no triangle  
 right triangle, 6.0  
 isosceles right triangle, 0.5  
   
  
