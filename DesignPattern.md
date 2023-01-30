### 设计模式

---

指在软件设计中，被反复使用的一种代码设计经验。**目的**是为了可重用代码，提高代码的可扩展性和可维护性。

#### 设计模式的类型：
- 创建型模式：关注点是如何创建对象，核心思想是把对象的创建和使用分离，使得两者能相互独立的变换。

  Factory Method、Abstract Factory、Builder、Prototype、Singleton

- 结构式模式：主要涉及如何组合各种对象以便获得更好、更灵活的结构。虽然面向对象提供了继承机制，但是结构性模式更多的是通过组合实现更灵活的功能。

​	Adaptor、Bridge、Composite、Decorator、Facade、Flyweight、Proxy

- 行为型模式：主要涉及算法和对象间的职责分配。通过使用对象组合，行为型模式可以描述一组对象应该如何协作完成一个整体任务。

​	Chain of Reposibility、Command、Iterator、Mediator、Memento、Observer、State、Strategy、Template Method、Visitor

#### 开闭原则
对扩展开放，对修改关闭。意思是增加新功能时，能不改代码就尽量不要改，如果只增加代码就完成了新功能，那是最好的。
#### 里氏代换原则
是一种面向对象的设计原则，就是如果我们调用一个父类的方法可以成功，那么替换成子类调用也应该可以运行。

