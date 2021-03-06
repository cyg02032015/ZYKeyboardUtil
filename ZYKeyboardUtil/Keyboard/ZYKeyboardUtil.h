//
//  ZYKeyboardUtil.h
//  ZYKeyboardUtil
//
//  Created by lzy on 15/12/26.
//  Copyright © 2015年 lzy . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define DURATION_ANIMATION      0.5

typedef enum {
    KeyboardActionDefault,
    KeyboardActionShow,
    KeyboardActionHide
}KeyboardAction;

//typedef struct {
//    CGFloat animationDuration;
//    CGRect frameBegin;
//    CGRect frameEnd;
//    CGFloat heightIncrement;
//    KeyboardAction action;
//    BOOL isSameAction;
//    //    animation的Curve(option)(考虑)
//}KeyboardInfo;


#pragma mark - KeyboardInfo(model)
@interface KeyboardInfo : NSObject

@property (assign, nonatomic) CGFloat animationDuration;
@property (assign, nonatomic) CGRect frameBegin;
@property (assign, nonatomic) CGRect frameEnd;
@property (assign, nonatomic) CGFloat heightIncrement;
@property (assign, nonatomic) KeyboardAction action;
@property (assign, nonatomic) BOOL isSameAction;


- (void)fillKeyboardInfoWithDuration:(CGFloat)duration frameBegin:(CGRect)frameBegin frameEnd:(CGRect)frameEnd heightIncrement:(CGFloat)heightIncrement action:(KeyboardAction)action isSameAction:(BOOL)isSameAction;

@end





#pragma mark - ZYKeyboardUtil
@interface ZYKeyboardUtil : NSObject

//Block
typedef void (^animateWhenKeyboardAppearBlock)(int appearPostIndex, CGRect keyboardRect, CGFloat keyboardHeight, CGFloat keyboardHeightIncrement);
typedef void (^animateWhenKeyboardDisappearBlock)(CGFloat keyboardHeight);
typedef void (^printKeyboardInfoBlock)(ZYKeyboardUtil *keyboardUtil, KeyboardInfo *keyboardInfo);


- (void)setAnimateWhenKeyboardAppearBlock:(animateWhenKeyboardAppearBlock)animateWhenKeyboardAppearBlock;

- (void)setAnimateWhenKeyboardDisappearBlock:(animateWhenKeyboardDisappearBlock)animateWhenKeyboardDisappearBlock;

- (void)setPrintKeyboardInfoBlock:(printKeyboardInfoBlock)printKeyboardInfoBlock;

@end


