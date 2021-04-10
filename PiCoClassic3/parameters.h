
#ifndef _PARAMETER

#include "static_parameters.h"

//物理的なパラメータ
/* PENGIN */
//#define TIRE_DIAMETER	(48.0 - 0.5)					//タイヤの直径
//#define TREAD_WIDTH	(65.0 + 1.4)					//トレッド幅
/* RED */
#define TIRE_DIAMETER	(48.0 - 0.2)					//タイヤの直径
#define TREAD_WIDTH	(65.0 + 3.8)					//トレッド幅

#define TREAD_CIRCUIT	(TREAD_WIDTH*PI/4)		//超信地旋回の時にタイヤが動く距離

//センサ関連パラメータ
#define WAITLOOP_SLED 300						//LEDを光らせてからAD変換を開始するまでの時間稼ぎ用定数
/* PENGIN */
//#define REF_SEN_R	878//621//411//612//653							//マウスを迷路中央に置いた時のセンサの値
//#define REF_SEN_L	852//569//390//438//558							//マウスを迷路中央に置いた時のセンサの値
/* RED */
#define REF_SEN_R	584//621//411//612//653							//マウスを迷路中央に置いた時のセンサの値
#define REF_SEN_L	604//569//390//438//558	

/* PENGIN */
//#define TH_SEN_R	314//295//153//246//167							//壁があるか否かの閾値
//#define TH_SEN_L	294//221//153//170//211							//壁があるか否かの閾値
//#define TH_SEN_FR	218//254//143//111//178							//壁があるか否かの閾値
//#define TH_SEN_FL	252//343//94//272//157							//壁があるか否かの閾値
/* RED */
#define TH_SEN_R	302//295//153//246//167							//壁があるか否かの閾値
#define TH_SEN_L	211//221//153//170//211							//壁があるか否かの閾値
#define TH_SEN_FR	250//254//143//111//178							//壁があるか否かの閾値
#define TH_SEN_FL	308//343//94//272//157							//壁があるか否かの閾値

#define CONTH_SEN_R	TH_SEN_R					//制御をかけるか否かの閾値
#define CONTH_SEN_L	TH_SEN_L					//制御をかけるか否かの閾値
#define CON_WALL_KP	(0.2)						//壁センサによる姿勢制御の比例制御の比例定数
#define con_wall_KD	0						//壁センサによる姿勢制御の微分制御の比例定数

//走行パラメータ
/* PENGIN */
//#define SEARCH_SPEED	(300)					//探索の速度
//#define SEARCH_ACCEL	(1.5)					//探索の加速度
/* REDN */
#define SEARCH_SPEED	(300)					//探索の速度
#define SEARCH_ACCEL	(1.0)					//探索の加速度

#define TURN_ACCEL		(0.3)					//超信地旋回の加速度
#define TURN_SPEED		(700)					//超信地旋回の最高速のリミット

//迷路関連パラメータ
#define GOAL_X	8		//ゴール座標(x)
#define GOAL_Y	7		//ゴール座標(y)

#define GOAL2_X	10		//ゴール座標(x)
#define GOAL2_Y	1		//ゴール座標(y)

#define _PARAMETER

#endif
