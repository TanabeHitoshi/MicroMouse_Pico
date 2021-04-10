
#ifndef _PARAMETER

#include "static_parameters.h"

//�����I�ȃp�����[�^
/* PENGIN */
//#define TIRE_DIAMETER	(48.0 - 0.5)					//�^�C���̒��a
//#define TREAD_WIDTH	(65.0 + 1.4)					//�g���b�h��
/* RED */
#define TIRE_DIAMETER	(48.0 - 0.2)					//�^�C���̒��a
#define TREAD_WIDTH	(65.0 + 3.8)					//�g���b�h��

#define TREAD_CIRCUIT	(TREAD_WIDTH*PI/4)		//���M�n����̎��Ƀ^�C������������

//�Z���T�֘A�p�����[�^
#define WAITLOOP_SLED 300						//LED�����点�Ă���AD�ϊ����J�n����܂ł̎��ԉ҂��p�萔
/* PENGIN */
//#define REF_SEN_R	878//621//411//612//653							//�}�E�X����H�����ɒu�������̃Z���T�̒l
//#define REF_SEN_L	852//569//390//438//558							//�}�E�X����H�����ɒu�������̃Z���T�̒l
/* RED */
#define REF_SEN_R	584//621//411//612//653							//�}�E�X����H�����ɒu�������̃Z���T�̒l
#define REF_SEN_L	604//569//390//438//558	

/* PENGIN */
//#define TH_SEN_R	314//295//153//246//167							//�ǂ����邩�ۂ���臒l
//#define TH_SEN_L	294//221//153//170//211							//�ǂ����邩�ۂ���臒l
//#define TH_SEN_FR	218//254//143//111//178							//�ǂ����邩�ۂ���臒l
//#define TH_SEN_FL	252//343//94//272//157							//�ǂ����邩�ۂ���臒l
/* RED */
#define TH_SEN_R	302//295//153//246//167							//�ǂ����邩�ۂ���臒l
#define TH_SEN_L	211//221//153//170//211							//�ǂ����邩�ۂ���臒l
#define TH_SEN_FR	250//254//143//111//178							//�ǂ����邩�ۂ���臒l
#define TH_SEN_FL	308//343//94//272//157							//�ǂ����邩�ۂ���臒l

#define CONTH_SEN_R	TH_SEN_R					//����������邩�ۂ���臒l
#define CONTH_SEN_L	TH_SEN_L					//����������邩�ۂ���臒l
#define CON_WALL_KP	(0.2)						//�ǃZ���T�ɂ��p������̔�ᐧ��̔��萔
#define con_wall_KD	0						//�ǃZ���T�ɂ��p������̔�������̔��萔

//���s�p�����[�^
/* PENGIN */
//#define SEARCH_SPEED	(300)					//�T���̑��x
//#define SEARCH_ACCEL	(1.5)					//�T���̉����x
/* REDN */
#define SEARCH_SPEED	(300)					//�T���̑��x
#define SEARCH_ACCEL	(1.0)					//�T���̉����x

#define TURN_ACCEL		(0.3)					//���M�n����̉����x
#define TURN_SPEED		(700)					//���M�n����̍ō����̃��~�b�g

//���H�֘A�p�����[�^
#define GOAL_X	8		//�S�[�����W(x)
#define GOAL_Y	7		//�S�[�����W(y)

#define GOAL2_X	10		//�S�[�����W(x)
#define GOAL2_Y	1		//�S�[�����W(y)

#define _PARAMETER

#endif
