//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APIDataManagerDelegate.h"
#import "EWalletUtilsDelegate.h"
#import "UIAlertViewDelegate.h"

@class EWalletUtils, MBProgressHUD, NSDictionary, NSNumber, NSString, SWRevealViewController, UIBarButtonItem, UIButton;

@interface MajorViewController : UIViewController <EWalletUtilsDelegate, UIAlertViewDelegate, APIDataManagerDelegate>
{
    SWRevealViewController *_revealVC;
    MBProgressHUD *_hud;
    EWalletUtils *_eWalletUtils;
    UIButton *_button;
    UIButton *_btnback;
    UIBarButtonItem *_btnMenu;
    NSNumber *_showMenuIcon;
    NSDictionary *_responseObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *responseObject; // @synthesize responseObject=_responseObject;
@property(nonatomic) NSNumber *showMenuIcon; // @synthesize showMenuIcon=_showMenuIcon;
@property(retain, nonatomic) UIBarButtonItem *btnMenu; // @synthesize btnMenu=_btnMenu;
@property(retain, nonatomic) UIButton *btnback; // @synthesize btnback=_btnback;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) EWalletUtils *eWalletUtils; // @synthesize eWalletUtils=_eWalletUtils;
@property(retain) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) SWRevealViewController *revealVC; // @synthesize revealVC=_revealVC;
- (void)completeDetectNewMessageWithCallBack:(id)arg1;
- (void)completeDetectKeypascoStatusCallBackWithStatusCode:(id)arg1 keypascoStatus:(id)arg2 deviceName:(id)arg3 deviceCount:(id)arg4;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)isNotLogin:(id)arg1;
- (void)apiError:(id)arg1;
- (void)addMenuButton;
- (void)showMenuButton;
- (void)hideMenuButton;
- (void)back:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

