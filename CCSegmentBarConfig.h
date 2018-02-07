//
//  CCSegmentBarConfig.h
//  CCSegmentBar
//
//  Created by coderchou on 2016/11/26.
//  Copyright © 2016年 coderchou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCSegmentBarConfig : NSObject


+ (instancetype)defaultConfig;

/** 背景颜色 */
@property (nonatomic, strong) UIColor *segmentBarBackColor;

@property (nonatomic, strong) UIColor *itemNormalColor;
@property (nonatomic, strong) UIColor *itemSelectColor;
@property (nonatomic, strong) UIFont *itemFont;

@property (nonatomic, strong) UIColor *indicatorColor;

@property (nonatomic, assign) CGFloat indicatorHeight;
@property (nonatomic, assign) CGFloat indicatorExtraW;

    // 内部实现, 在这个里面写, 外界, 只负责调用
    // 功能, 改变 itemNormalColor 的值
    //
@property (nonatomic, copy, readonly) CCSegmentBarConfig *(^itemNC)(UIColor *color);
@property (nonatomic, copy, readonly) CCSegmentBarConfig *(^itemSC)(UIColor *color);
@property (nonatomic, copy, readonly) CCSegmentBarConfig *(^indicatorEW)(CGFloat w);
    
    

// 链式编程的改法
//- (CCSegmentBarConfig *(^)(UIColor *color))itemNC;
//- (CCSegmentBarConfig *(^)(UIColor *color))itemSC;



@end
