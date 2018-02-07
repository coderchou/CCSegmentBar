//
//  CCSegmentBarConfig.m
//  CCSegmentBar
//
//  Created by coderchou on 2016/11/26.
//  Copyright © 2016年 coderchou. All rights reserved.
//

#import "CCSegmentBarConfig.h"

@implementation CCSegmentBarConfig

+ (instancetype)defaultConfig {
    
    CCSegmentBarConfig *config = [[CCSegmentBarConfig alloc] init];
    config.segmentBarBackColor = [UIColor clearColor];
    config.itemFont = [UIFont systemFontOfSize:15];
    config.itemNormalColor = [UIColor lightGrayColor];
    config.itemSelectColor = [UIColor redColor];
    
    config.indicatorColor = [UIColor redColor];
    config.indicatorHeight = 2;
    config.indicatorExtraW = 10;
    
    return config;
    
}

    - (CCSegmentBarConfig *(^)(UIColor *))itemNC
    {
        
        return ^(UIColor *color) {
            self.itemNormalColor = color;
            return self;
        };
        
    }
    
    - (CCSegmentBarConfig *(^)(UIColor *))itemSC
    {
        
        return ^(UIColor *color) {
            self.itemSelectColor = color;
            return self;
        };
        
    }

    
    - (CCSegmentBarConfig *(^)(CGFloat))indicatorEW
    {
        return ^(CGFloat w) {
            self.indicatorExtraW = w;
            return self;
        };
    }
    

//- (CCSegmentBarConfig *(^)(UIColor *))itemNC {
//
//    return ^(UIColor *color){
//        self.itemNormalColor = color;
//        return self;
//    };
//
//}
//
//-(CCSegmentBarConfig *(^)(UIColor *))itemSC {
//    return ^(UIColor *color){
//        self.itemSelectColor = color;
//        return self;
//    };
//}


@end
