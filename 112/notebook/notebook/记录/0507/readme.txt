缩小摄像范围，0507.2组中，一个是normal;一个是xor；查看凹槽处的投影结果；
笔记：
1.使用不同的normal图像进行estimate Ld、Lg给xor解码使用，会得到不同的效果，其中主要区别是凹槽处uncertain点的多少；实验给出了使用前四张
条纹最宽的normal图像进行estimate，进而重建的xor编码方法；得到三维重建为xor.ply文件；
2.传统格雷码确实产生了误解码，特别是在高位投影图上的解码为错值；从normal.ply和normal_use_4_first_estimate.ply中以及产生这两个点云
数据过程中产生的二值化图案也可以说明解码错误；
3.代码库中，C:\Users\jo\Desktop\123\code\cuda_No3 - 测试原始投影图，调合适的m,b值：是用来测试原始图，调出合适的m,b值；【至于xor编码方法
是否使用相同的m,b值应该注意；要么保持实验的一致性，m,b值与传统的格雷码方法一样；要么为了得到更好的实验图像更改m,b值；而且在xor解码中
注意使用estimate Ld和Lg的图像是normal的中间几张还是前几张还是xor中的前几张？】