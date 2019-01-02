/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageExtensionGroup : PSUIAppCellularUsageGroup <UsageFeedDelegate> {
    int  _selectedBillingCycle;
    NSMutableArray * _specifiersUpdatedWithBillingCycle;
    PSCellularUsage * _totalUsage;
}

@property (nonatomic) int selectedBillingCycle;
@property (nonatomic, retain) NSMutableArray *specifiersUpdatedWithBillingCycle;
@property (nonatomic, retain) PSCellularUsage *totalUsage;

- (void).cxx_destruct;
- (id)getBillingCycle:(id)arg1;
- (id)groupedStatisticsToSpecifiers:(id)arg1;
- (int)selectedBillingCycle;
- (void)setBillingCycle:(id)arg1 specifier:(id)arg2;
- (void)setSelectedBillingCycle:(int)arg1;
- (void)setSpecifiersUpdatedWithBillingCycle:(id)arg1;
- (void)setTotalUsage:(id)arg1;
- (id)specifiers;
- (id)specifiersUpdatedWithBillingCycle;
- (id)totalBytesUsed;
- (id)totalRoamingBytesUsed;
- (id)totalUsage;
- (void)updateTotalUsage:(id)arg1;

@end
