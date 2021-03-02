//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

#import "AsyncImageViewDelegate.h"
#import "MKMapViewDelegate.h"

@class MKMapView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIButton;

@interface BenefitSummaryViewController : HNCTableViewController <AsyncImageViewDelegate, MKMapViewDelegate>
{
    _Bool _isHiddenToolbar;
    NSLayoutConstraint *_toolbarHeightConstraint;
    UIButton *_listViewModeButton;
    UIButton *_mapViewModeButton;
    NSLayoutConstraint *_benefitSummaryListHeightConstraint;
    MKMapView *_mapView;
    NSString *_pageOrder;
    NSString *_responseMessage;
    NSMutableArray *_benefitSummaryArray;
    NSMutableDictionary *_cellLogoImagesDictionary;
    long long _currentLoadingCellRowsCount;
    struct CLLocationCoordinate2D _userLocationCoordinate;
}

@property(nonatomic) long long currentLoadingCellRowsCount; // @synthesize currentLoadingCellRowsCount=_currentLoadingCellRowsCount;
@property(retain, nonatomic) NSMutableDictionary *cellLogoImagesDictionary; // @synthesize cellLogoImagesDictionary=_cellLogoImagesDictionary;
@property(nonatomic) struct CLLocationCoordinate2D userLocationCoordinate; // @synthesize userLocationCoordinate=_userLocationCoordinate;
@property(nonatomic) _Bool isHiddenToolbar; // @synthesize isHiddenToolbar=_isHiddenToolbar;
@property(retain, nonatomic) NSMutableArray *benefitSummaryArray; // @synthesize benefitSummaryArray=_benefitSummaryArray;
@property(retain, nonatomic) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(retain, nonatomic) NSString *pageOrder; // @synthesize pageOrder=_pageOrder;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSLayoutConstraint *benefitSummaryListHeightConstraint; // @synthesize benefitSummaryListHeightConstraint=_benefitSummaryListHeightConstraint;
@property(retain, nonatomic) UIButton *mapViewModeButton; // @synthesize mapViewModeButton=_mapViewModeButton;
@property(retain, nonatomic) UIButton *listViewModeButton; // @synthesize listViewModeButton=_listViewModeButton;
@property(retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint; // @synthesize toolbarHeightConstraint=_toolbarHeightConstraint;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)loadMapAnnotations;
- (void)imageDidFinishLoading:(id)arg1;
- (void)loadCellLogoImageWithSize:(struct CGSize)arg1 imageUrl:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchModeClickEvent:(id)arg1;
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
