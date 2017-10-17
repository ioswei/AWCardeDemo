//
//  AWCustomerButtonView.m
//  CardLayout
//
//  Created by iMac-1 on 2017/10/17.
//  Copyright © 2017年 陈凯. All rights reserved.
//

#import "AWCustomerButtonView.h"

#define Btn_Witdh 80*SCREENBILI
#define Btn_Height 30

#define Btn_Tag 1000

@implementation AWCustomerButtonView

+ (instancetype)creatView{
    
    if (IPHONE4||IPHONE5) {
       return [[self alloc] initWithFrame:CGRectMake(0, 64+15, SCREEN_WIDTH, Btn_Height)];
    }
    
    return [[self alloc] initWithFrame:CGRectMake(0, 64+20*SCREENBILI, SCREEN_WIDTH, Btn_Height)];
    
}

- (instancetype)initWithFrame:(CGRect)frame{
    
    self = [super initWithFrame:frame];
    
    if (self) {
        [self creatView];
    }

    return self;
    
}

- (void)creatView{
    
    float btn_spacing = (SCREEN_WIDTH - Btn_Witdh*4)/5.0f;
    
    NSArray *btnTitlesArrs = @[@"1",@"2",@"3",@"4"];
    
    for (int i = 0; i < btnTitlesArrs.count; i++) {
        
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
        button.frame = CGRectMake(btn_spacing+(btn_spacing+Btn_Witdh)*i, 0, Btn_Witdh, Btn_Height);
        button.titleLabel.font = FontS(15);
        button.layer.cornerRadius = 5.0f;
        button.backgroundColor = RGB(231, 152, 2);
        button.tag = Btn_Tag+i;
        [button setTitle:btnTitlesArrs[i] forState:UIControlStateNormal];
        [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        if (i == 0) {
            button.selected = YES;
            button.backgroundColor = RGB(31, 152, 221);
            _typeBtn = button;
        }
        [button addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];
        [button setTitleColor:[UIColor whiteColor] forState:UIControlStateSelected];
        [self addSubview:button];
        
    }
    
}

- (void)buttonClick: (UIButton *)sender{
    
    _typeBtn.selected = NO;
    _typeBtn.backgroundColor = RGB(231, 152, 2);
    
    sender.selected = YES;
    sender.backgroundColor = RGB(31, 152, 221);
    
    _typeBtn = sender;
    
    if (self.chooseClick) {
        self.chooseClick(sender.tag-Btn_Tag);
    }
    
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
