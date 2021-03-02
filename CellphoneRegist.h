//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "UITextFieldDelegate.h"

@class APIDataManager, NSString, UIButton, UITextField, UIView;

@interface CellphoneRegist : MajorViewController <UITextFieldDelegate>
{
    long long _viewType;
    UIView *_topView;
    APIDataManager *_dataManager;
    UIButton *_regist;
    UIButton *_login;
    UIView *_line1;
    UIView *_line2;
    UIButton *_urlbtn;
    UIView *_viewType0View;
    UIView *_viewType1View;
    UITextField *_cellphoneTextField;
    UITextField *_verfityTextField;
    UIButton *_sureLogin;
    UITextField *_phoneNumTextField;
    UITextField *_emailTextField;
    UIButton *_registBtn;
}

@property(retain, nonatomic) UIButton *registBtn; // @synthesize registBtn=_registBtn;
@property(retain, nonatomic) UITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) UITextField *phoneNumTextField; // @synthesize phoneNumTextField=_phoneNumTextField;
@property(retain, nonatomic) UIButton *sureLogin; // @synthesize sureLogin=_sureLogin;
@property(retain, nonatomic) UITextField *verfityTextField; // @synthesize verfityTextField=_verfityTextField;
@property(retain, nonatomic) UITextField *cellphoneTextField; // @synthesize cellphoneTextField=_cellphoneTextField;
@property(retain, nonatomic) UIView *viewType1View; // @synthesize viewType1View=_viewType1View;
@property(retain, nonatomic) UIView *viewType0View; // @synthesize viewType0View=_viewType0View;
@property(retain, nonatomic) UIButton *urlbtn; // @synthesize urlbtn=_urlbtn;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) UIButton *login; // @synthesize login=_login;
@property(retain, nonatomic) UIButton *regist; // @synthesize regist=_regist;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void)system_maintenance:(id)arg1;
- (void)REGPHONECODE_FAILED:(id)arg1;
- (void)REGPHONECODE_SUCCESS:(id)arg1;
- (void)GET_FIRST_LOGIN_FAILED:(id)arg1;
- (void)GET_FIRST_LOGIN_SUCCESS:(id)arg1;
- (void)MOBILECODELOGIN_TEXT_ERROR:(id)arg1;
- (void)MOBILECODELOGIN_FAILED:(id)arg1;
- (void)MOBILECODELOGIN_SUCCESS:(id)arg1;
- (void)sureloginfunction;
- (_Bool)openSafari;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)btnCheckAgree:(id)arg1;
- (void)createLoginContent;
- (void)createRegistContent;
- (void)determineRegist;
- (_Bool)checkEMail:(id)arg1;
- (_Bool)chechVerify:(id)arg1;
- (void)btnLeft:(id)arg1;
- (void)loginbtn;
- (void)registbtn;
- (void)viewDidDisappear:(_Bool)arg1;
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

