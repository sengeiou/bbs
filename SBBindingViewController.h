//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseTableViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface SBBindingViewController : SBBaseTableViewController <UITextFieldDelegate>
{
    _Bool _isBinded;
    UITextField *_appUidTextField;
    UITextField *_userIdTextField;
    UIButton *_submitButton;
    long long _userIdLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long userIdLength; // @synthesize userIdLength=_userIdLength;
@property(readonly, nonatomic) _Bool isBinded; // @synthesize isBinded=_isBinded;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UITextField *userIdTextField; // @synthesize userIdTextField=_userIdTextField;
@property(nonatomic) __weak UITextField *appUidTextField; // @synthesize appUidTextField=_appUidTextField;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)submitButtonClick:(id)arg1;
- (void)updateBindingInfo;
- (void)updateUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

