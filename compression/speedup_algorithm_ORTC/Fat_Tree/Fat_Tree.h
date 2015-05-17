const int podsize=8;
const int podnum=podsize;
const int EdgeSwitchNum=podnum*podsize/2;
const int AggreSwitchNum=podnum*podsize/2;
const int CoreSwitchNum=(podsize/2)*(podsize/2);
const int Pmax=podsize;
const int Tmax=podsize*podsize/4;
const int Smax=EdgeSwitchNum+AggreSwitchNum+CoreSwitchNum;
const int TotalTNum=Tmax*EdgeSwitchNum;
const int MaxInt=99999999;
const int Maskcode=0x000000ff; 
const int RoundMax=500;
const double Randa=0.7;
const int MaxExchangetime=100;
const int ClassNum=3;
const int BlockStart=1;
const int BlockEnd=2;
const int BlcokSNE=3;
const int IP_AD_Range=1<<13;
const int IPv4len=32;
unsigned int IPsegsz[IPv4len]={0};
const int MapLen=3;
const int Intbitlen=sizeof(int)*8;
const int EclassNum=3; // number of equivalent classes
const int EclassSID[EclassNum]={0, EdgeSwitchNum, EdgeSwitchNum+AggreSwitchNum}; //IDs of representative switches for each equivalent class  
const int CCencoding_enable=1;
