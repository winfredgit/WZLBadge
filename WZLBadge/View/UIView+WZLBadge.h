//
//  UIView+WZLBadge.h
//  WZLBadgeDemo
//
//  Created by zilin_weng on 15/6/24.
//  Copyright (c) 2015年 Weng-Zilin. All rights reserved.
//  Project description: this is a solution to enable any UIView to display badge

#import <UIKit/UIKit.h>
#import "WZLBadgeProtocol.h"

#pragma mark -- badge apis

@interface UIView (WZLBadge)<WZLBadgeProtocol>


/**
 *  show badge with red dot style and WBadgeAnimTypeNone by default.
 */
- (void)showBadge;

/**
 *  showBadge
 *
 *  @param style WBadgeStyle type
 *  @param value
 *  @param aniType
 *
 */
- (void)showBadgeWithStyle:(WBadgeStyle)style
                     value:(id)value
             animationType:(WBadgeAnimType)aniType;


/**
 *  clear badge(hide badge)
 */
- (void)clearBadge;

/**
 *  make bage(if existing) not hiden
 */
- (void)resumeBadge;

@end
