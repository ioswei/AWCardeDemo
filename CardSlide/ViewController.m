//
//  ViewController.m
//  CardSlide
//
//  Created by DavidWang on 15/11/25.
//  Copyright © 2015年 DavidWang. All rights reserved.
//

#import "ViewController.h"
//#import "DWViewCell.h"
#import "DWFlowLayout.h"
#import "CustomerCollectionViewCell.h"

#import "AWCustomerButtonView.h"


#define SCREENWITH   [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT [UIScreen mainScreen].bounds.size.height
#define WS(weakSelf)        __weak __typeof(&*self)weakSelf = self

#define Item_Width SCREENWITH - 60

@interface ViewController ()<UICollectionViewDataSource,UICollectionViewDelegate>{
    NSArray *data;
    AWCustomerButtonView *btnView;
}
@property (strong, nonatomic) NSIndexPath *currentIndexPath;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    DWFlowLayout *layout = [[DWFlowLayout alloc] init];
    //设置是否需要分页
    [layout setPagingEnabled:YES];
    self.collectionView.collectionViewLayout = layout;
    [_collectionView reloadData];
    
    [self.collectionView registerNib:[UINib nibWithNibName:@"CustomerCollectionViewCell" bundle:nil] forCellWithReuseIdentifier:@"CustomerCollectionViewCell"];
    
    [self creatMainButtonView];

}

/**
 创建顶部 btn 按钮
 */
- (void)creatMainButtonView{
    
    WS(weakSelf);
    btnView = [AWCustomerButtonView creatView];
    [btnView setChooseClick:^(NSInteger tag) {
        NSLog(@" === tag == =%ld",tag);
        switch (tag) {
            case 0:
            {
                [weakSelf.collectionView setContentOffset:CGPointMake(0, weakSelf.collectionView.contentOffset.y) animated:YES];
            }
                break;
            case 1:
            {
                [weakSelf.collectionView setContentOffset:CGPointMake((Item_Width)+20, weakSelf.collectionView.contentOffset.y) animated:YES];
            }
                break;
            case 2:
            {
                [weakSelf.collectionView setContentOffset:CGPointMake((Item_Width)*2+20*2, weakSelf.collectionView.contentOffset.y) animated:YES];
            }
                break;
            case 3:
            {
                [weakSelf.collectionView setContentOffset:CGPointMake((Item_Width)*3+60, weakSelf.collectionView.contentOffset.y) animated:YES];
            }
                break;
            default:
                break;
        }
        
    }];
    [self.view addSubview:btnView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark cell的数量
-(NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return 4;
}

#pragma mark cell的视图
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *cellIdentifier = @"CustomerCollectionViewCell";
    CustomerCollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:cellIdentifier forIndexPath:indexPath];
    
    cell.backgroundColor = [[UIColor grayColor] colorWithAlphaComponent:.5f];
    
    return cell;
}

#pragma mark cell的大小
-(CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath{
    return CGSizeMake(Item_Width, SCREENHEIGHT - 64 - 150*SCREENBILI);
}

#pragma mark cell的点击事件
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"点击%ld",indexPath.row);
    
}

#pragma 停止滑动监听
- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    
    NSIndexPath *indexPath = [self.collectionView indexPathForItemAtPoint:CGPointMake(scrollView.contentOffset.x+Item_Width, 0.5*scrollView.bounds.size.height)];

    if (!indexPath || self.currentIndexPath == indexPath) {
        return;
    }
    self.currentIndexPath = indexPath;

    btnView.typeBtn.selected = NO;
    btnView.typeBtn.backgroundColor = RGB(231, 152, 2);

    UIButton *sender = (UIButton *)[btnView viewWithTag:1000+indexPath.row];
    sender.selected = YES;
    sender.backgroundColor = RGB(31, 152, 221);
    
    btnView.typeBtn = sender;
    
}


@end
