/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMenuController.h"
#import <Foundation/NSObject.h>


@interface UIMenuController : NSObject {
@private
	CGRect _targetRect;
}
@property(readonly, assign, nonatomic) CGRect menuFrame;
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;
+(id)sharedMenuController;
-(id)init;
-(void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;
-(void)setTargetRect:(CGRect)rect inView:(id)view;
-(void)update;
@end

@interface UIMenuController (UIMenuControllerStatic)
-(BOOL)_update:(BOOL)update;
-(void)calloutBarWillStartAnimation:(id)calloutBar;
-(void)calloutBarDidFinishAnimation:(id)calloutBar;
@end
