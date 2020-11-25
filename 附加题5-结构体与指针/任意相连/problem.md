 # 任意相连  
  
 ## 题目描述  
 用指针对于任意输入4个字符串进行相连组合，输入的四个字符串用空格分开，要求输出所有的两两相连结果。例如输入的4个字符串为a bc def ghij， 输出结果为:  
 a+a=aa  
 a+bc=abc  
 a+def=adef  
 a+ghij=aghij  
 bc+a=bca  
 ... (以此类推)  
 ghij+def=ghijdef  
 ghij+ghij=ghijghij  
 要求编写函数void stringcats(char *s, char *t), 字符串相连的部分用指针实现, 每个相连的操作都通过调用该函数实现。  
 要求不允许使用任何字符串库函数。  
   
 ## 输入  
 输入四个任意的字符串，用空格分开  
   
 ## 输出  
 输出所有的两两相连结果  
   
 ## 样例输入  
 a bc def ghij  
 ## 样例输出  
 a+a=aa  
 a+bc=abc  
 a+def=adef  
 a+ghij=aghij  
 bc+a=bca  
 bc+bc=bcbc  
 bc+def=bcdef  
 bc+ghij=bcghij  
 def+a=defa  
 def+bc=defbc  
 def+def=defdef  
 def+ghij=defghij  
 ghij+a=ghija  
 ghij+bc=ghijbc  
 ghij+def=ghijdef  
 ghij+ghij=ghijghij  
   
  
