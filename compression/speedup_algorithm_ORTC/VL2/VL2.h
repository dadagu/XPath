const int DA=20;
const int DI=8;
const int TorSNum=DA*DI/4;
const int AggrSNum=DI;
const int IntSNum=DA/2;
const int SingleTNum=DA;
const int TotalTNum=SingleTNum*TorSNum;
const int Smax=TorSNum+AggrSNum+IntSNum;
const int Pmax=DA;
const int MaxInt=99999999;
const int Maskcode=0x000000ff;
const int RoundMax=1000;
const double Randa=0.5;
const int MaxExchangetime=100;
const int MaxOPtimalNum=TotalTNum*3/11;
const int ClassNum=3;
const int IPv4len=32;
unsigned int IPsegsz[IPv4len]={0};
const int MapLen=4;
const int Intbitlen=sizeof(int)*8;
const int EclassNum=3; // number of equivalent classes
const int EclassSID[EclassNum]={0, TorSNum, TorSNum+AggrSNum}; //IDs of representative switches for each equivalent class  
const int CCencoding_enable=0;

