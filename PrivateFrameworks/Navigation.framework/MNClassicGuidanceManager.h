/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNClassicGuidanceManager : NSObject <MNGuidanceManager> {
    double  _baselineDistance;
    double  _baselineSpeed;
    unsigned long long  _countLocationUpdates;
    struct { 
        long long context; 
        double distance; 
        bool usePrimaryName; 
        bool useSecondaryName; 
        bool useDistanceForSecondary; 
        bool useContinueForSecondary; 
        int numPrimarySigns; 
        int numSecondarySigns; 
    }  _currentInstructionOptions;
    NSString * _currentRoadName;
    NSString * _currentShieldText;
    long long  _currentShieldType;
    unsigned long long  _currentStepIndex;
    <MNGuidanceManagerDelegate> * _delegate;
    GEOComposedWaypoint * _destination;
    bool  _didAnnounceArrival;
    bool  _didAnnounceManeuverContinue;
    bool  _didAnnounceManeuverExecution;
    bool  _didAnnounceManeuverInitial;
    bool  _didAnnounceManeuverPreparation;
    bool  _didAnnounceProceedToRoute;
    bool  _didAnnounceSecondaryManeuver;
    bool  _didAnnounceStartOfRoute;
    bool  _didShowPrimarySign;
    bool  _didShowSecondarySign;
    double  _distanceWhenExecuteAnnounced;
    double  _distanceWhenFirstAnnouncementAllowed;
    double  _distanceWhenInitialAnnounced;
    double  _distanceWhenPrepareAnnounced;
    double  _estimateOfTimeToSpeakExecutionAnnouncement;
    int  _guidanceState;
    double  _minExecutionDistance;
    MNNavigationSession * _navigationSession;
    unsigned long long  _pointIndexForCurrentRoadInfo;
    GEOComposedRoute * _route;
    bool  _shouldAnnounceContinueStraight;
    bool  _shouldSkipExecuteAnnounce;
    bool  _shouldSkipInitialAnnounce;
    bool  _shouldSkipPrepareAnnounce;
    double  _timeLastAnnouncementEnded;
    double  _timeLastAnnouncementStarted;
    double  _timeUntilNextAnnouncement;
}

@property (nonatomic) struct { long long x1; double x2; bool x3; bool x4; bool x5; bool x6; int x7; int x8; } currentInstructionOptions;
@property (nonatomic, retain) NSString *currentRoadName;
@property (nonatomic, retain) NSString *currentShieldText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNGuidanceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int guidanceState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOComposedRouteStep *maneuverStep;
@property (nonatomic, readonly) unsigned long long maneuverStepIndex;
@property (nonatomic, readonly) bool proceedingToRoute;
@property (nonatomic, readonly) NSData *remainingRouteZilchData;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;

- (void).cxx_destruct;
- (double)_adjustedVehicleSpeed:(id)arg1;
- (id)_announcementForArrival;
- (id)_announcementForStart;
- (bool)_announcementInProgress;
- (double)_calculateExecutionDistance:(id)arg1 withLogging:(bool)arg2;
- (void)_clearCurrentRoadName;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (unsigned long long)_currentAnnouncementStage;
- (double)_distanceForSign;
- (double)_durationOfLastAnnouncement;
- (double)_estimateTimeToSpeakExecutionAnnouncement;
- (id)_getClosestStepWithNameForProceedToRoute:(struct { double x1; double x2; })arg1 routeMatch:(id)arg2;
- (id)_getStepAtIndex:(unsigned long long)arg1;
- (id)_getStepAtIndex:(unsigned long long)arg1 clampIndexToRange:(bool)arg2;
- (bool)_hasCurrentRoadNameChangedForLocation:(id)arg1;
- (bool)_hasSubsteps;
- (unsigned long long)_maneuverStepIndex;
- (id)_nameInfoForContinueSign;
- (id)_nameInfoForCurrentRoad;
- (void)_notifyAnnounceContinueAsRepeat:(bool)arg1;
- (void)_notifyAnnounceManeuverForStep:(id)arg1 withDistance:(double)arg2 withCombinedGuidance:(int)arg3 playShortPrompt:(bool)arg4 isRepeat:(bool)arg5 stage:(unsigned long long)arg6 timeLimit:(double)arg7;
- (void)_notifyAnnounceProceedToRoute:(id)arg1 withClosestStep:(id)arg2 withNamedStep:(id)arg3 andSecondaryStep:(id)arg4 isRepeat:(bool)arg5;
- (void)_notifyDisplayManeuverForSecondaryStep:(id)arg1;
- (void)_notifyDisplayManeuverForStep:(id)arg1 withDistance:(double)arg2 allowCombinedGuidance:(bool)arg3;
- (void)_resetStepState;
- (double)_speedFactor:(id)arg1;
- (bool)_startingWrongWayForLocation:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (double)_timeUntilNextAnnouncement:(id)arg1 location:(id)arg2 upcomingStage:(out unsigned long long*)arg3;
- (bool)_updateCheckIfNextStep:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (bool)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (bool)_updateConsiderInitialAnnouncement:(id)arg1 passedManeuverStart:(bool)arg2;
- (bool)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (bool)_updateGuidanceStateWithLocation:(id)arg1 withMatch:(id)arg2 withNavigatorState:(int)arg3 stepChanged:(bool*)arg4;
- (void)_updatePrepareForNextStep;
- (id)_updateValidateRouteMatchForLocation:(id)arg1;
- (struct { long long x1; double x2; bool x3; bool x4; bool x5; bool x6; int x7; int x8; })currentInstructionOptions;
- (id)currentRoadName;
- (id)currentShieldText;
- (void)dealloc;
- (id)delegate;
- (int)guidanceState;
- (id)initWithNavigationSession:(id)arg1 proceedToRoute:(bool)arg2 allowMidRouteStart:(bool)arg3;
- (id)maneuverStep;
- (struct { double x1; double x2; })maneuverStepCoordinate;
- (unsigned long long)maneuverStepIndex;
- (bool)proceedingToRoute;
- (id)remainingRouteZilchData;
- (bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (id)route;
- (void)setCurrentInstructionOptions:(struct { long long x1; double x2; bool x3; bool x4; bool x5; bool x6; int x7; int x8; })arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (int)transportType;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForReturnToRoute;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (void)updateGuidanceForProceedToRouteAtLocation:(struct { double x1; double x2; })arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;

@end
