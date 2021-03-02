//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "UIAlertViewDelegate.h"

@class APIDataManager, NSString, UILabel, UISwitch;

@interface FreeMyppwordViewController : MajorViewController <UIAlertViewDelegate>
{
    _Bool _needPw;
    _Bool _needPwSend;
    float _version;
    APIDataManager *_dataManager;
    NSString *_noPwdTimes;
    NSString *_noPwdAmt;
    UILabel *_lbHint;
    UISwitch *_noPwSwitch;
}

@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) UISwitch *noPwSwitch; // @synthesize noPwSwitch=_noPwSwitch;
@property(retain, nonatomic) UILabel *lbHint; // @synthesize lbHint=_lbHint;
@property(retain, nonatomic) NSString *noPwdAmt; // @synthesize noPwdAmt=_noPwdAmt;
@property(retain, nonatomic) NSString *noPwdTimes; // @synthesize noPwdTimes=_noPwdTimes;
@property(nonatomic) _Bool needPwSend; // @synthesize needPwSend=_needPwSend;
@property(nonatomic) _Bool needPw; // @synthesize needPw=_needPw;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)system_maintenance:(id)arg1;
- (void)switchControl:(id)arg1;
- (void)createContentView;
- (void)didGetNoPwdClauseFailed:(id)arg1;
- (void)didGetNoPwdClauseSuccess:(id)arg1;
- (void)didUpdateNeedPwFailed:(id)arg1;
- (void)didUpdateNeedPwSuccess:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

