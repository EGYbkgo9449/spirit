/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"

@class NSMutableString, UIPushButton, NSMutableArray;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIPushButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	int _keyboardType;
	int _keyboardAppearance;
	id _delegate;
}
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)setKeyboardType:(int)type;
-(void)setKeyboardType:(int)type appearance:(int)appearance;
-(void)dealloc;
-(void)_updateFields;
-(BOOL)showsOKButton;
-(void)setShowsOKButton:(BOOL)button;
-(void)setTextCentersHorizontally:(BOOL)horizontally;
-(id)stringValue;
-(void)setStringValue:(id)value;
-(void)appendString:(id)string;
-(void)deleteLastCharacter;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;
-(void)setNumberOfEntryFields:(int)entryFields;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setDelegate:(id)delegate;
-(void)_textDidChange;
-(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
-(BOOL)textFieldShouldStartEditing:(id)textField;
-(void)textFieldDidResignFirstResponder:(id)textField;
-(void)okButtonClicked:(id)clicked;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end

