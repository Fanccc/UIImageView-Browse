//
//  CustomScrollView.h
//  ImageCategry
//
//  Created by fanchuan on 2017/6/23.
//  Copyright © 2017年 fanchuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomScrollView : UIScrollView

@property (nonatomic, copy)void(^subViewBeginDismiss)(UIPanGestureRecognizer *);

@end
