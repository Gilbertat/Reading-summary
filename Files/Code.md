## Code: The Hidden Language of Computer Hardware and Software

编码：隐匿在计算机软硬件背后的语言


### 记忆关键字

Morse Code (摩尔斯编码)

Binary Code (二进制码)

Braille 布莱叶盲文

atom 原子 neutron 中子 proton 质子 electron 电子 molecules 分子

电流、电势、电压、电阻

串联(series) - 与、并联（parallel）- 或

短路
 
电报机、继电器（电磁现象）

十进制、罗马数字、阿拉伯数字、八进制、二进制

> 罗马数字
> I(1) V(5) X(10) L(50) C(100) D(500) M(1000)

bit（比特）

对数运算

UPC，Universal Product Code，通用产品代码

奇偶校验码

布尔代数、并集 - OR、交集 - AND、空集

logic gates （逻辑门）：继电器的组合

与门: 两个继电器的串联  两输入端、三输入端与门

或门、反向器（inverter）、2-4 译码器、或非门（NOR）、与非门（NAND）、缓冲器（buffer）

加法器、异或门（XOR）、同或门、半加器（Half Adder）、全加器（Full Adder）、8 位加法器、求补器

有符号数、无符号数

振荡器（oscillator）- 时钟（clock）、反馈（feedback）、触发器（Flip-Flop）、D 型锁存器、分频器（frequency divider）、8位行波计数器、8-1 选择器、3-8 译码器、

> 触发器电路可以保持信息，它可以记住某些信息。

input device、output device、

> 8 比特代表一个字节（byte）。

读/写存储器（read/write memory）= 随机访问存储器（Random Access Memory）= RAM, 易失性存储器（volatile）

> 1 KB = 1024 byte = 1024 x 8 bit
> 
> 1 MB = 1024 KB
> 
> 1 GB = 1024 MB
> 
> 1 TB = 1024 GB

指令码（instruction code） = 操作码（Operation code，opcode）

Jump 指令、条件跳转（Condition Jump）、零锁存器、

> 从存储器中取出指令的过程称为取指令（instruction fetch）。
> 
> 机器响应指令码做一系列操作的过程称为执行（execute）指令。


计算机与计算器的区别

> 能否控制重复操作或者循环（looping）是计算机（computer）和计算器（calculator）的区别。

数字计算机 （digital computer） = 处理器（processor） + 存储器（memory）+ 输入设备（input）+ 输出设备（output）

CPU（central processing unit），中央处理单元。

算术逻辑单元（Arithmetic Logic Unit），即 ALU。

程序计算器（PC，Program Counter）

汇编语言（assembly language）

图灵机（Turing Machine）、图灵测试（Turing Test）

ENIC（Electronic Numerical Integrator and Computer）电子数字积分计算机

NPN 晶体管，其三部分分别为集电极（collector）、基极（base）以及发射极（emitter）。

《TTL 数据手册》、《CMOS 数据手册》

TTL（transistor-transistor logic）晶体管-晶体管逻辑。

十亿分之一秒则为纳秒。

CMOS（complementary metal-oxide semiconductor）互补金属氧化物半导体

> 最大时钟频率（maximum clock speed），也成为主频，是影响处理器速度的决定性因素之一。

英特尔 8080、摩托罗拉 6800

处理器指令集、直接寻址（direct addressing）、间接寻址（indexed addressing）、立即数寻址（immediate addressing）

堆栈上溢（stack overflow）、堆栈下溢（stack underflow）

NOP（no operation），无操作。


> little-endian（Intel 方式），低字节在前，高字节在后。

> big-endian（Motorola 方式），高字节在前，低字节在后。

摩尔定律：微处理器中的晶体管数量每 18 个月翻一倍。

流水线技术（pipelining）

ASCII （American Standard Code for Information Interchange），美国信息交换标准码

静态随机访问存储器（Static Random Access Memory）,SRAM

动态访问存储器（Dynamic Random Access Memory），DRAM

video board，显卡，位视频显示器提供信号的电子元件。

像素

当一个处理器首次上电或者复位时，它会从特定的内存地址开始执行机器代码。

键盘处理程序（keyboard handler）

初始化代码（initialization code）

只读存储器 ROM

PROM （Programmable Read-Only Memory），可编程只读存储器，只能编程一次。

EPROM （Erasable Programmable Read-Only Memory），可擦除可编程只读存储器。

操作系统 （operation system）= 控制台命令处理程序（Console Command Processor，CCP） + 基本磁盘操作系统（Basic Disk Operation System，BDOS）+ 基本输入输出系统(Basic Input/Output System, BIOS）

CP/M（Control Program for Micros）、QDOS（Quick and Dirty Operating System）-> 86-DOS -> MS-DOS(Microsoft Disk Operatiing System)

文件系统（file system）

UNIX、时分复用（time sharing）、多任务操作系统、内存管理、虚拟内存（virtual memory）、

Linux、mac  OS 、Windows

操作系统的主要功能之一就是让程序能够方便地访问计算机的硬件，操作系统提供的这种访问操作称为API（Application Programming Interface），也就是应用程序接口。


自然数 = 正整数、负整数

有理数 = 分数，用两个整数的比值表示。

无理数

实数 = 有理数 + 无理数 

复数 = 实数 + 虚数

科学计数法

引导程序（bootstrap loader）

FAT(File Allocation Table),文件分配表。

汇编器：读取一个汇编语言文件（源文件），将其转换成包含机器码的文件（可执行文件）。

编译器（compiler）：将高级语言的程序语句转换成机器码指令。

FORTEAN、ALGOL、COBOL、BASIC、Pascal、Ada、C、Smalltalk、C++

GUI（Graphic User Interface），图形用户界面

IDE（Integrated Development Environment），集成开发环境

矢量图（vector graphics）

位图（bitmap）

### 定律

欧姆定律：

> I = E / R

> I : 电流，E：电压，R：电阻

> P = E * I

 传统代数：
 
> 加法和乘法的交换律（commutative）
> 
> 加法和乘法的结合律（associative）
> 
> 加法分配率（distributive）


布尔代数：Boole's algeba

> 交换律、结合律、分配律




### Expression

编码：指的是一种用来在机器和人之间交流（传递信息）的方式。

振荡器的周期：一个循环所占用的时间。周期的倒数就是振荡器的频率（frequency）。


