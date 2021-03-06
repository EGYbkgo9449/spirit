/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSArray, NSMutableArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
	int _numberOfFingers;
	int _numberOfTaps;
	CGPoint _location;
	int _touchesAtMaxTaps;
	BOOL _gotEnoughTouches;
	NSMutableArray* _touches;
}
@property(readonly, assign, nonatomic) CGPoint location;
@property(assign, nonatomic) int numberOfTaps;
@property(assign, nonatomic) int numberOfFingers;
@property(readonly, assign, nonatomic) NSArray* touches;
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(void)reset;
-(void)_tapTooSlow;
-(void)_doubleTapTooSlow;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

