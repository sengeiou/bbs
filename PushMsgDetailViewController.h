//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCWebKitViewController.h"

@class NSString, UIButton;

@interface PushMsgDetailViewController : HNCWebKitViewController
{
    _Bool _isShowExitAppButton;
    _Bool _isNotBackPushMsgViewController;
    UIButton *_deleteMessageButton;
    NSString *_messageType;
    NSString *_messageboxId;
    NSString *_contentId;
    NSString *_param;
}

@property(nonatomic) _Bool isNotBackPushMsgViewController; // @synthesize isNotBackPushMsgViewController=_isNotBackPushMsgViewController;
@property(nonatomic) _Bool isShowExitAppButton; // @synthesize isShowExitAppButton=_isShowExitAppButton;
@property(retain, nonatomic) NSString *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *messageboxId; // @synthesize messageboxId=_messageboxId;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) UIButton *deleteMessageButton; // @synthesize deleteMessageButton=_deleteMessageButton;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)WebServiceObject:(id)arg1 didCompletePH009WithHeader:(id)arg2 withPH009ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompletePH003WithHeader:(id)arg2 withPH003ResponseBody:(id)arg3;
- (void)deleteMessageButtonClickEvent:(id)arg1;
- (void)exitAppButtonClickEvent:(id)arg1;
- (void)homeButtonClickEvent:(id)arg1;
- (void)backButtonClickEvent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

