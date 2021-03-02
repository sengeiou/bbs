//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APIDataManager, EWalletUtils, NSMutableArray, NSString, NSTimer, UIButton, UIPickerView, UITextField, UIToolbar, UIView;

@interface ConnectMyawordViewController : MajorViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    _Bool _alertWhenTimeout;
    _Bool _defultBtnBool;
    float _version;
    APIDataManager *_dataManager;
    UITextField *_txtMyaword;
    UITextField *_txtNickName;
    NSString *_taskId;
    UIPickerView *_accountPickerView;
    UIToolbar *_toolBar;
    NSMutableArray *_arrayMyaword;
    NSString *_keypascoStatus;
    UIView *_navTop;
    UIButton *_defultBtn;
    NSString *_defultStr;
    long long _viewType;
    NSTimer *_timer;
    EWalletUtils *_ewallet;
    NSString *_qrcode;
    long long _keypascoStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long keypascoStartTime; // @synthesize keypascoStartTime=_keypascoStartTime;
@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *qrcode; // @synthesize qrcode=_qrcode;
@property(retain, nonatomic) EWalletUtils *ewallet; // @synthesize ewallet=_ewallet;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) NSString *defultStr; // @synthesize defultStr=_defultStr;
@property(nonatomic) _Bool defultBtnBool; // @synthesize defultBtnBool=_defultBtnBool;
@property(retain, nonatomic) UIButton *defultBtn; // @synthesize defultBtn=_defultBtn;
@property(retain, nonatomic) UIView *navTop; // @synthesize navTop=_navTop;
@property(nonatomic) _Bool alertWhenTimeout; // @synthesize alertWhenTimeout=_alertWhenTimeout;
@property(retain, nonatomic) NSString *keypascoStatus; // @synthesize keypascoStatus=_keypascoStatus;
@property(retain, nonatomic) NSMutableArray *arrayMyaword; // @synthesize arrayMyaword=_arrayMyaword;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIPickerView *accountPickerView; // @synthesize accountPickerView=_accountPickerView;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UITextField *txtNickName; // @synthesize txtNickName=_txtNickName;
@property(retain, nonatomic) UITextField *txtMyaword; // @synthesize txtMyaword=_txtMyaword;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)system_maintenance:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)defultBank;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)completeDetectKeypascoStatusCallBackWithStatusCode:(id)arg1 keypascoStatus:(id)arg2 deviceName:(id)arg3 deviceCount:(id)arg4;
- (void)completeSignEndCallBackWithStatusCode:(id)arg1 resultCode:(id)arg2;
- (void)completeSignBeginCallBackWithStatusCode:(id)arg1 taskId:(id)arg2;
- (void)keypasoNoThing;
- (void)callWhenKeypascoTimeout;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)createContentView;
- (void)pickerDone:(id)arg1;
- (void)pickerClean:(id)arg1;
- (void)btnRight:(id)arg1;
- (void)doSms;
- (void)keypascoClock;
- (void)doKeypasco;
- (void)didIsFirstLoginFailed:(id)arg1;
- (void)didIsFirstLoginSuccess:(id)arg1;
- (void)registerWalletFailed:(id)arg1;
- (void)registerWalletSuccess:(id)arg1;
- (void)verifyAccMOBFailed:(id)arg1;
- (void)verifyAccMOBSuccess:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
