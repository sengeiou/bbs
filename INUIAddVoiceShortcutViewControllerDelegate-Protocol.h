//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INUIAddVoiceShortcutViewController, INVoiceShortcut, NSError;

@protocol INUIAddVoiceShortcutViewControllerDelegate <NSObject>
- (void)addVoiceShortcutViewControllerDidCancel:(INUIAddVoiceShortcutViewController *)arg1;
- (void)addVoiceShortcutViewController:(INUIAddVoiceShortcutViewController *)arg1 didFinishWithVoiceShortcut:(INVoiceShortcut *)arg2 error:(NSError *)arg3;
@end

