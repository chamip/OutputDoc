### C++复习笔记 -- 表达式/语句/函数

---

#### 表达式

1. **关系运算符**

   `> < >= <= == !=`

2. **类型转换**

   `static_cast`

   用于非多态类型的转换（静态转换），对应于C中的**隐式类型转换**，但是不能用于两个不相关类型的转换，例如整形和整形指针。

   ```cpp
   void Test() {
   	//c
   	int i = 10;
   	double d1 = i;//隐式类型转换
   	//int * p = i;//无法隐式类型转换，只能强制类型转换
   	int * p = (int *)i;
   	//c++
   	double d2 = static_cast<double>(i);
   	//相当于创建了一个static_cast<double>类型的匿名对象赋值给d2
   	int * p2 = static_cast<int *>(i);//无法转换，error
   }
   ```

   `reinterpret_cast`

   用于将一种类型转换成另一种不相关的类型，对应于C中的**强制类型转换**。

   ```c++
   void Test() {
   	int i = 20;
   	int * p2 = reinterpret_cast<int *>(i);
   }
   ```

   `const_cast`

   功能是删除变量的const属性，方便再次赋值，只能转换指针或者引用。

   ```c++
   void Test() {
   	const int i = 10;
   	int * p = const_cast<int *>(&i);
   	*p = 20;
   	std::cout << i << std::endl;
   	std::cout << *p << std::endl;
   }
   //i = 10
   //*p = 20
   ```

   `dynamic_cast`

   相比`static_cast`,`dynamic_cast`会在运行是检查类型转换是否合法，具有一定的安全性。使用场景和`static_cast`类似。

#### 语句

1. **条件/迭代/跳转**

   条件：`if/switch`

   迭代：`while/for/do while`

   跳转：`break/continue/go to/return`

2. **异常处理**

   ```c++
   try {
   	...
   }catch {
   	...
   }
   ...
   /* 若try块没有异常，则跳过所有catch继续执行；否则try异常终止，执行catch块，然后再执行最后一个catch块后* 的内容 
   */
   ```

#### 函数

1. 局部对象和函数声明

   局部静态对象：局部变量的生命周期贯穿函数调用之后的时间：

   ```c++
   int count_calls() {
   	static int count = 0;
   	return ++count;
   }
   
   int main()
   {
   	for(int i = 0; i < 10; i++) {
   	std::cout << count_calls() << std::endl;
   	}
   	return 0;
   }
   ```

2. 参数传递

   使用引用避免拷贝

   数组引用形参

   数组的引用：

   ```c++
   void print_arr(int (&arr)[10]) {
   	for(auto elem : arr) {
   	std::cout << elem << std::endl;
   	}
   }
   ```

3. 函数返回

   不要返回局部对象的引用或指针

   ```c++
   const string & manip() {
       string ret;
       if(!ret.empty()) {
           return ret;//error，返回局部对象的引用
       }else {
           return "Empty";//error,"Empty"是一个局部临时量
       }
   }
   ```

4. 函数重载

   同名函数，形参列表中的参数个数和参数类型不同。

5. 函数指针

   声明指向函数的指针时，必须指定指针指向的函数类型，意味着声明应当指定函数的返回类型以及函数的参数列表。

   ```c++
   dobule cal(int);
   double (* pf)(int);//指针pf指向的函数，输入参数为int，返回类型为double
   pf = cal;//指针赋值
   ```

   指针作为函数的参数传递：

   `void estimate(int lines, double (* pf)(int));`

   使用指针调用函数：

   ```c++
   double y = (* pf)(5);//通过指针调用，recommend.
   double y = cal(5);//通过函数调用
   ```

   eg:

   ```c++
   #include <iostream>
   
   double call1(int lines) {
       return 0.05 * lines;
   }
   
   double call2(int lines) {
       return 0.5 * lines;
   }
   
   void estimate(int line_num, double (* pf)(int lines)) {
       std::cout << "line_num: " << line_num
       <<", func_answer: " << (* pf)(line_num) << std::endl; 
   }
   
   int main()
   {
       int line_num = 10;
       //函数名就是指针，直接传入函数名
       estimate(line_num, call1);
       estimate(line_num, call2);
       return 0;
   }
   ```

   