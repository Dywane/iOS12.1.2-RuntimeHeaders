/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController {
    HKHealthStore * _healthStore;
    HKMapRouteTableViewCell * _mapRouteTableViewCell;
    NSMutableArray * _routeData;
}

@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKMapRouteTableViewCell *mapRouteTableViewCell;
@property (nonatomic, retain) NSMutableArray *routeData;
@property (readonly) HKWorkoutRoute *workoutRoute;

- (void).cxx_destruct;
- (id)_convertIndexPathToSuper:(id)arg1;
- (void)addRouteData:(id)arg1 hasFinishedQuery:(bool)arg2;
- (id)healthStore;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (id)initWithWorkoutRoute:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3;
- (void)loadRoute;
- (id)mapRouteTableViewCell;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseAndDisplayRouteData;
- (id)routeData;
- (void)setHealthStore:(id)arg1;
- (void)setMapRouteTableViewCell:(id)arg1;
- (void)setRouteData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)workoutRoute;

@end