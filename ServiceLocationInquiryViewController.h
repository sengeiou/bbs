//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UITextField;

@interface ServiceLocationInquiryViewController : HNCTableViewController <CLLocationManagerDelegate>
{
    _Bool _isAlreadyDetectGPSLocation;
    NSLayoutConstraint *_serviceLocationInquiryListHeightConstraint;
    NSString *_pageOrder;
    NSString *_selectCityAreaName;
    NSString *_selectCityAreaCode;
    NSMutableArray *_serviceLocationInquiryArray;
    UITextField *_atmLocationInquiryOptionsTextField;
    NSMutableDictionary *_atmLocationInquiryRowsCellDictionary;
    NSMutableDictionary *_atmLocationInquiryOptionsDictionary;
    NSMutableDictionary *_selectAtmLocationInquiryOptionsDictionary;
    CLLocationManager *_locationManager;
    struct CLLocationCoordinate2D _userLocationCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D userLocationCoordinate; // @synthesize userLocationCoordinate=_userLocationCoordinate;
@property(nonatomic) _Bool isAlreadyDetectGPSLocation; // @synthesize isAlreadyDetectGPSLocation=_isAlreadyDetectGPSLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableDictionary *selectAtmLocationInquiryOptionsDictionary; // @synthesize selectAtmLocationInquiryOptionsDictionary=_selectAtmLocationInquiryOptionsDictionary;
@property(retain, nonatomic) NSMutableDictionary *atmLocationInquiryOptionsDictionary; // @synthesize atmLocationInquiryOptionsDictionary=_atmLocationInquiryOptionsDictionary;
@property(retain, nonatomic) NSMutableDictionary *atmLocationInquiryRowsCellDictionary; // @synthesize atmLocationInquiryRowsCellDictionary=_atmLocationInquiryRowsCellDictionary;
@property(retain, nonatomic) UITextField *atmLocationInquiryOptionsTextField; // @synthesize atmLocationInquiryOptionsTextField=_atmLocationInquiryOptionsTextField;
@property(retain, nonatomic) NSMutableArray *serviceLocationInquiryArray; // @synthesize serviceLocationInquiryArray=_serviceLocationInquiryArray;
@property(retain, nonatomic) NSString *selectCityAreaCode; // @synthesize selectCityAreaCode=_selectCityAreaCode;
@property(retain, nonatomic) NSString *selectCityAreaName; // @synthesize selectCityAreaName=_selectCityAreaName;
@property(retain, nonatomic) NSString *pageOrder; // @synthesize pageOrder=_pageOrder;
@property(retain, nonatomic) NSLayoutConstraint *serviceLocationInquiryListHeightConstraint; // @synthesize serviceLocationInquiryListHeightConstraint=_serviceLocationInquiryListHeightConstraint;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)detectGPSLocation;
- (void)WebServiceObject:(id)arg1 didCompleteAP0021WithHeader:(id)arg2 withAP0021ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAP0011WithHeader:(id)arg2 withAP0011ResponseBody:(id)arg3;
- (void)tableFootViewButtonClickEvent:(id)arg1;
- (_Bool)checkAtmLocationInquiryTextFieldOptionsValid;
- (void)mmbPickerViewBtnDoneClickEvent:(id)arg1;
- (long long)getCurrentAtmLocationInquiryOptionsTextFieldCellIndex;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

