//
//  AWCustomerButtonView.h
//  CardLayout
//
//  Created by iMac-1 on 2017/10/17.
//  Copyright © 2017年 陈凯. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AWCustomerButtonView : UIView

@property (nonatomic,strong) UIButton *typeBtn;

@property (nonatomic,copy) void(^chooseClick)(NSInteger tag);

+ (instancetype)creatView;

@end
