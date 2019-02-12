# happy-ip
简介

        开发c++多年，一直没有一个跨平台、高性能的TCP&UDP服务器，c++在开源工具包上面已落后python、java等开发语言。python开发很简单，绝大部分功能都是第三方包搞定，一个pip命令就完成了；java开发也是，只需要一条mvn指令，就可以调用第三方包。只有c++是最麻烦的，为了做到跨平台，c++支持的功能是尽量的少，不具备通用性、高性能，就不会在c++标准里面出现。从c++98、c++03、c++11用了多长的时间来完成版本迭代。不支持日期时间类型、配置文件读取、日志文件输出、跨平台TCP&UDP服务器...太多太多这样的例子，三天三夜也说不完。我们c++的从业者天天折腾这些功能、人家早上AI、大数据了，我们还在折腾语法、折腾内存泄漏、折腾以上的功能（可喜的是从c++11开始、c++14、c++17陆续推出，在逐渐拉近与其他语言的距离，那天，c++开发能和python一样容易，也有pip这样的三方工具，就实现心目中的大同世界了！）。于是乎，自己动了想开源一套高性能TCP&UDP服务器的念头，于是就有了happy-ip的项目。

        自己之所有能够完成这个项目，是因为我们公司这么多年一直在用这个我们开发的框架。公司现在的tcp连接数量已经达到50万+，通过简单的分布式，代码还是能高性能、安全的运行，这也是直接发表开源项目的底气。happy-ip的是依托于boost的asio。之所以选择asio，是不想再折腾最原始的封装。boost库的asio相较于ace要更友好一些，最主要是boost库是c++第一库，在扩展性和稳定性方面有不可比拟的优势。happy-ip对asio做了以下核心封装：

         （1）更友好的调用（继承抽象接口的读写事件即可）；

         （2）会话管理（方便做超时控制、推送消息以及回收资源）；

         （3）收发数据与业务逻辑隔离（读取数据后放入线程池处理，不阻塞读事件）；
         
         （4）关闭延迟（特别适合TCP移动通信，TCP会话经常关闭但却不会一直投递关闭事件）；

         （5）自动分包（自动处理后续包问题，完整包数据提交给上层应用）；

         （6）无缝融入json、protobuf等RPC框架（后面会提交protobuf的rpc代码）；

编译：

1、编译选项说明：

   BOOST_INCLUDE：boost头文件所在路径   
   
   CMAKE_BUILD_TYPE：编译类型（默认Debug）
   
   BUILD_EXAMPLES: 是否编译样例（默认OFF）

2、编译命令

根目录创建build目录，进入build文件夹执行如下命令

2.1 windows

cmake .. -LA -DBOOST_INCLUDE='E:/work/git' -DCMAKE_BUILD_TYPE=Debug -DBUILD_EXAMPLES=ON

2.2 linux

cmake .. -D3RDPARTY_INCLUDE_DIR=../utils -DPROTOBUF_INCLUDE_DIR=../utils/3rdparty/include/protobuf/3.6 \
    -DPROTOBUF_LIB_DIR=../../utils/3rdparty/lib/ubuntu/protobuf/3.6 -DBOOST_LIB_DIR=../../utils/3rdparty/lib/ubuntu \
    -DBOOST_INCLUDE_DIR=../utils/3rdparty/include -DGLOG_OUTPUT=ON

make

make install

（安装位置在install目录）

更为详细信息请参考：https://blog.csdn.net/wang19840301
