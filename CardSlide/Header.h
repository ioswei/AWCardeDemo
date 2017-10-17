//
//  Header.h
//  LoanProject
//
//  Created by Peoit_Czw on 2017/8/3.
//  Copyright © 2017年 Peoit_Czw. All rights reserved.
//

#ifndef Header_h
#define Header_h

//-------------------- user Defaults --------------------
#define USER_DEFAULT                 [NSUserDefaults standardUserDefaults]

//-------------------- shared Application --------------------
#define LIAPP_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define LIAPP_NAVIGATION_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate.navigationController)

//------------------- dvices info ------------------
#define IPHONE4                 ([[UIScreen mainScreen] bounds].size.height == 480.0)
#define IPHONE5                 ([[UIScreen mainScreen] bounds].size.height == 568.0)
#define IPHONE6                 ([[UIScreen mainScreen] bounds].size.height == 667.0)
#define IPHONE6Plus             ([[UIScreen mainScreen] bounds].size.height == 736.0)

#define IOSDEVICE [[[UIDevice currentDevice] systemVersion] floatValue]

//-------------------- appSize --------------------
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//是否为iOS7
#define iOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)
//是否为iOS8及以上系统
#define iOS8 ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0)
//是否为iOS9及以上系统
#define iOS9 ([[UIDevice currentDevice].systemVersion doubleValue] >= 9.0)
//window
#define WINDOW  [[UIApplication sharedApplication].delegate window]

//-----------------image cache------------
#define CACHE_DIR @"cacheImage"

//----------------- colors -----------------
#define RGB(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define ColorEarth [UIColor colorWithRed:137.0f/255.0f green:62.0f/255.0f blue:32.0f/255.0f alpha:1]
#define ColorLine [UIColor colorWithRed:238.0f/255.0f green:238.0f/255.0f blue:238.0f/255.0f alpha:1]
#define ColorMainBG [UIColor colorWithRed:124.0/255.0f green:78.0/255.0f blue:240.0/255.0f alpha:1]
// EXAMPLE: cell.textColor = HEXCOLOR(0xFF3366);
#define COLORFORM0X(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define btnTitle_COLOR [UIColor getColorWithHexString:@"#333333"]// 按钮标题颜色
#define Common_topBackgroundColor RGB(114,208,126)
#define Common_downTabbarTitleColor RGB(7,196,147)

/**
 *  主背景色调
 */
#define MAIN_BGCOLOR   [UIColor getColorWithHexString:@"7c4ef0"]
#define LIGHTCOLOR [UIColor getColorWithHexString:@"#999999"]

//------------------- font Family Name ------------
#define FONTWITHFZHT(F) [UIFont fontWithName:@"FZHTJW--GB1-0" size:F]
#define FONTWITHSTHT(F) [UIFont fontWithName:@"STHeitiSC" size:F]
#define FONTWITHSTHT_M(F) [UIFont fontWithName:@"STHeitiSC-Medium" size:F]
#define FONTWITHSTHT_L(F) [UIFont fontWithName:@"STHeitiSC-Light" size:F]
#define FONTWITHARIAL(F) [UIFont fontWithName:@"Arial" size:F]

// 细体
#define FONT_11				FontS(FONTSIZE11)
#define FONT_14				FontS(FONTSIZE14)
#define FONT_16				FontS(FONTSIZE16)
#define FONT_18				FontS(FONTSIZE18)
#define FONT_20				FontS(FONTSIZE20)

// 粗体字
#define FONT_B11				FontB(FONTSIZE11)
#define FONT_B14				FontB(FONTSIZE14)
#define FONT_B16				FontB(FONTSIZE16)
#define FONT_B18				FontB(FONTSIZE18)
#define FONT_B20				FontB(FONTSIZE20)

#define FontS(size)             [UIFont systemFontOfSize:size]
#define FontB(size)             [UIFont boldSystemFontOfSize:size]

//------------------- set Frame ------------
#define FRM(x,y,w,h) CGRectMake(x, y, w, h)
#define Plus (IPHONE6Plus?1.5:1)
#define SCREENBILI  (SCREEN_WIDTH/375.)
#define Screen_bounds ([UIScreen mainScreen].bounds)
// app版本号
#define APPVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#pragma mark 网络请求头部
#define ApiVersion @"1.0.0"
#define Channel @"ios"
#define Version @"1.0.0"
#define AppName @"93" //1:缺钱用 2:借钱花 3:贷款吗 4:小额贷款 5:闪电贷款 6:现金贷款 10:好下款
#define AppCode @"CS" //DXSDK  JSXQ
#define BaiduTongJiKey @"ca414230c6"
#define Poatform @"1" // 1：小丫  2：前海
#define NewHTML @"2" //1：老版   2：新版1.0

#define LXKFPhone @"18639412412"

#define LoginMessage @"您申请的贷款提交成功，请留意找钱花发给您的短信。"
#define DataMessage @"您提交的资料正在审核当中，请耐心等待。"
#pragma mark 3des加密
#define DESKEY @"YAYA_FINANCIAL_BANK_APP@2015"

#define WS(weakSelf)        __weak __typeof(&*self)weakSelf = self

// 系统类型 2 android 1 ios
#define OS_Type @"1"
// 操作系统版本
#define OS_Version [UIDevice currentDevice].systemVersion

#define SYSTEM_VERSION [NSString stringWithFormat:@"IOS%@",OS_Version]

#define DefUUID                [[UIDevice currentDevice].identifierForVendor UUIDString]

#define NETWORK_ERRORMESSAGE @"您可能未连接网络，或者网络状态不佳，请确认网络状态后重试。谢谢！"

#define Visitor_Phone @"18523157635" //游客账户

#define Visitor_Psw @"pro1714" //游客密码

#define UserId @"userid"//用户ID

#define UserName @"userName"//用户名

#define UserMessage @"userMessage"//用户消息

#define UserPsw @"UserPsw"//用户密码

#define IdCard @"idCard"//身份证号

#define BankNum @"bankNum"//银行卡号

#define Bank @"bank"//银行名称

#define Learn @"learn"//学信网

#define Drive @"drive"//驾照

#define Zhima @"zhima"//芝麻信用

#define Yunying @"yunying"//运营商

#define SesameCredit @"sesameCredit"//芝麻信用

#define LoanType @"loanType"//贷款类型

#define LoanName @"loanName"//贷款名称

#define Latitude @"latitude"//经度

#define Longitude @"longitude"//纬度

#define UserData @"userData"//用户信息

#define UserBrithDay @"UserBrithDay"//生日

#define Audit @"audit"//是否审核

#define KeFuPhone @"KeFuPhone"//保存的客服电话

#define HomeEmpty @"isGrab"//是否放空

#define Cooperation @"cooperation"//是否显示合作商

#define ADRESS @"adress"//地址

#define MaxLoanMoney @"maxLoanMoney"//提升额度之后最大借款金额

#define UserPhone @"userPhone" //用户手机号

#define CITY @"city"//城市

#define BOOLFORKEY @"dhGuidePage"//引导页的记录

#define IditityPositive @"iditityPositive"//身份证正面

#define TestUserPhone @"13251226566" //审核测试手机号

#define TestUserName @"李清平" //审核测试姓名

#define TestUserIdcard @"42080319781119421x" //审核测试身份证

#define TestUserPsw @"xin898" //审核测试密码（芝麻信用—运营商—学信网）

//借款期限和金额
#define QIXIAN @"qixian"//期限
#define JINE @"jine"//金额

//还款的状态（1是已还款  和未还款）
#define HKED @"hked"

//点击贷款的时间
#define DKTIME @"dktime"

//#import "MessageBox.h"
//
//#import "BaseImageView.h"

//#import "UIColor+ColorChange.h"
//
//#import "NSString+AWStringTool.h"
//
//#import "YYModel.h"

#define iOS10 ([[UIDevice currentDevice].systemVersion doubleValue] >= 10.0)

#define CG_HEIGHT(v) v.frame.size.height
#define CG_WIDTH(v)  v.frame.size.width
#define CG_PX(v)     v.frame.origin.x
#define CG_PY(v)     v.frame.origin.y

#endif /* Header_h */
