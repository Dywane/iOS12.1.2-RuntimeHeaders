/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLocationEditItemViewController : EKEditItemViewController <EKUILocationSearchModelDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    EKCalendarItem * _calendarItem;
    bool  _needsSave;
    bool  _onlyDisplayMapLocations;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UISearchBar * _searchBar;
    EKUILocationSearchModel * _searchModel;
    EKUIConferenceRoom * _selectedConferenceRoom;
    EKStructuredLocation * _selectedLocation;
    EKStructuredLocation * _structuredLocation;
    bool  _supportsStructuredLocations;
    bool  _tableConstraintsInstalled;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsSave;
@property (nonatomic) bool onlyDisplayMapLocations;
@property (nonatomic, retain) EKUIConferenceRoom *selectedConferenceRoom;
@property (nonatomic, retain) EKStructuredLocation *selectedLocation;
@property (nonatomic, retain) EKStructuredLocation *structuredLocation;
@property (readonly) Class superclass;

+ (id)_sectionNameForSection:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_cellForConferenceRoomRowInTableView:(id)arg1 indexPath:(id)arg2;
- (id)calendarItemForSearchModel:(id)arg1;
- (void)conferenceRoomSearchUpdated:(id)arg1;
- (id)contactsImage;
- (void)contactsSearchUpdated:(id)arg1;
- (void)currentLocationUpdated:(id)arg1;
- (void)dealloc;
- (void)eventsSearchUpdated:(id)arg1;
- (void)frequentsSearchUpdated:(id)arg1;
- (id)greyPinImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadView;
- (id)locationArrowImage;
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;
- (void)mapSearchUpdated:(id)arg1;
- (bool)needsSave;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)onlyDisplayMapLocations;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (bool)presentModally;
- (void)recentsSearchUpdated:(id)arg1;
- (id)redPinImage;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)selectedConferenceRoom;
- (id)selectedLocation;
- (void)setNeedsSave:(bool)arg1;
- (void)setOnlyDisplayMapLocations:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedConferenceRoom:(id)arg1;
- (void)setSelectedLocation:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (bool)showingCurrentLocationRow;
- (bool)showingTextRow;
- (id)structuredLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (id)title;
- (void)updateViewConstraints;
- (void)useAsString:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
