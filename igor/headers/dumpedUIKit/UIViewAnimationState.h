/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"

@class UIView, NSString;

__attribute__((visibility("hidden")))
@interface UIViewAnimationState : NSObject {
@private
	UIViewAnimationState* _nextState;
	NSString* _animationID;
	void* _context;
	id _delegate;
	double _duration;
	double _delay;
	double _frameInterval;
	double _start;
	int _curve;
	float _repeatCount;
	int _transition;
	UIView* _transitionView;
	SEL _willStartSelector;
	SEL _didEndSelector;
	int _didEndCount;
	CGPoint _position;
	unsigned _willStartSent : 1;
	unsigned _useCurrentLayerState : 1;
	unsigned _cacheTransition : 1;
	unsigned _autoreverses : 1;
	unsigned _roundsToInteger : 1;
	unsigned _reserved : 27;
}
+(void)pushViewAnimationState:(id)state context:(void*)context;
+(void)popAnimationState;
-(void)dealloc;
-(void)setAnimationAttributes:(id)attributes;
-(void)animationDidStart:(id)animation;
-(void)sendDelegateAnimationDidStop:(id)sendDelegateAnimation finished:(BOOL)finished;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
@end
