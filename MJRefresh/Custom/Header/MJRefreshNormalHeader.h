//
//  MJRefreshNormalHeader.h
//  MJRefreshExample
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "MJRefreshStateHeader.h"

NS_ASSUME_NONNULL_BEGIN
//常规的
@interface MJRefreshNormalHeader : MJRefreshStateHeader
//箭头
@property (weak, nonatomic, readonly) UIImageView *arrowView;
//菊花
@property (weak, nonatomic, readonly) UIActivityIndicatorView *loadingView;


/** 菊花的样式 */
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle __attribute__((deprecated("first deprecated in 3.2.2 - Use `loadingView` property")));
@end

NS_ASSUME_NONNULL_END
