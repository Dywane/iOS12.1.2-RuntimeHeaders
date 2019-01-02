/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    bool  _isShowing;
    MKMapItem * _mapItem;
    <MKOfficialAppViewControllerDelegate> * _officialAppDelegate;
    MKPlaceSectionHeaderView * _officialAppHeaderView;
    MKOfficialAppView * _officialAppView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowing;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) <MKOfficialAppViewControllerDelegate> *officialAppDelegate;
@property (nonatomic, retain) MKPlaceSectionHeaderView *officialAppHeaderView;
@property (nonatomic, retain) MKOfficialAppView *officialAppView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadAppArtwork:(id)arg1 adamID:(id)arg2;
- (void)_loadOfficialApp;
- (void)_updateAppImage:(id)arg1 error:(id)arg2;
- (void)_updateView:(id)arg1;
- (id)infoCardChildPossibleActions;
- (id)initWithMKMapItem:(id)arg1;
- (bool)isShowing;
- (id)mapItem;
- (id)officialAppDelegate;
- (id)officialAppHeaderView;
- (id)officialAppView;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)setIsShowing:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOfficialAppDelegate:(id)arg1;
- (void)setOfficialAppHeaderView:(id)arg1;
- (void)setOfficialAppView:(id)arg1;
- (void)updateOfficialViewButtonText;
- (void)viewDidLoad;

@end
