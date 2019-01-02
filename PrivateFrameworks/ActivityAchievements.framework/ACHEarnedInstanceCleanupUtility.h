/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHEarnedInstanceCleanupUtility : NSObject {
    ACHEarnedInstanceStore * _earnedInstanceStore;
}

@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;

- (void).cxx_destruct;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupFirstWorkoutAchievements;
- (id)_cleanupLongestMoveStreakAchievements;
- (id)earnedInstanceStore;
- (id)initWithEarnedInstanceStore:(id)arg1;
- (void)performCleanup;
- (void)setEarnedInstanceStore:(id)arg1;

@end
