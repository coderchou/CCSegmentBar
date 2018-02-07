//
//  CCSementBarVC.h
//  CCSegmentBar
//
//  Created by coderchou on 2016/11/26.
//  Copyright © 2016年 coderchou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCSegmentBar.h"
@interface CCSementBarVC : UIViewController


@property (nonatomic, weak) CCSegmentBar *segmentBar;


- (void)setUpWithItems: (NSArray <NSString *>*)items childVCs: (NSArray <UIViewController *>*)childVCs;


@end
