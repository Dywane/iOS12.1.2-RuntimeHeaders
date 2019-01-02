/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPEventClassificationType : NSObject {
    bool  _allDayAllowed;
    NSMutableArray * _children;
    unsigned long long  _classificationDepth;
    bool  _cultureRelated;
    int  _defaultCumulativeMinutes;
    double  _defaultDuration;
    int  _defaultStartingTimeHour;
    int  _defaultStartingTimeMinutes;
    NSString * _defaultTitle;
    bool  _fairlyGeneric;
    NSMutableArray * _genericPatternKeywords;
    bool  _highPriority;
    NSString * _identifier;
    bool  _isAppointment;
    NSString * _language;
    bool  _lowPriority;
    bool  _mealRelated;
    double  _minutesAfterDefaultStartingTime;
    double  _minutesBeforeDefaultStartingTime;
    bool  _movieRelated;
    IPEventClassificationType * _parent;
    NSMutableArray * _patternKeywords;
    unsigned long long  _preferedMeridian;
    bool  _sportRelated;
    NSMutableArray * _subjectKeywords;
    NSMutableArray * _titleKeywords;
    NSString * _titleSenderTemplate;
    NSMutableDictionary * _upperPriorityEventTypesIdentifiers;
    bool  _useForTimeAdjustement;
}

@property (getter=isAllDayAllowed, nonatomic) bool allDayAllowed;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) unsigned long long classificationDepth;
@property (getter=isCultureRelated, nonatomic, readonly) bool cultureRelated;
@property (nonatomic) int defaultCumulativeMinutes;
@property (nonatomic) double defaultDuration;
@property (nonatomic) int defaultStartingTimeHour;
@property (nonatomic) int defaultStartingTimeMinutes;
@property (nonatomic, retain) NSString *defaultTitle;
@property (getter=isFairlyGeneric, nonatomic, readonly) bool fairlyGeneric;
@property (nonatomic, retain) NSMutableArray *genericPatternKeywords;
@property (getter=isHighPriority, nonatomic) bool highPriority;
@property (nonatomic, retain) NSString *identifier;
@property (getter=isAppointment, nonatomic, readonly) bool isAppointment;
@property (nonatomic, retain) NSString *language;
@property (getter=isLowPriority, nonatomic) bool lowPriority;
@property (getter=isMealRelated, nonatomic, readonly) bool mealRelated;
@property (nonatomic) double minutesAfterDefaultStartingTime;
@property (nonatomic) double minutesBeforeDefaultStartingTime;
@property (getter=isMovieRelated, nonatomic, readonly) bool movieRelated;
@property (nonatomic) IPEventClassificationType *parent;
@property (nonatomic, retain) NSMutableArray *patternKeywords;
@property (nonatomic) unsigned long long preferedMeridian;
@property (nonatomic, readonly) bool prefersTitleSenderDecoration;
@property (getter=isSportRelated, nonatomic, readonly) bool sportRelated;
@property (nonatomic, retain) NSMutableArray *subjectKeywords;
@property (nonatomic, retain) NSMutableArray *titleKeywords;
@property (nonatomic, retain) NSString *titleSenderTemplate;
@property (nonatomic, retain) NSMutableDictionary *upperPriorityEventTypesIdentifiers;
@property (nonatomic) bool useForTimeAdjustement;

+ (double)_averageDistanceBetweenFeatureKeyword:(id)arg1 featureDates:(id)arg2 subjectLength:(unsigned long long)arg3 inSubject:(bool)arg4;
+ (id)_identifierForCluster:(unsigned long long)arg1;
+ (id)_identifiersForClusters:(id)arg1;
+ (id)_loadTaxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2 error:(id*)arg3;
+ (id)_parentFromIdentifier:(id)arg1;
+ (double)_scoreForKeywordsInSubject:(bool)arg1 distanceToDates:(double)arg2 polarity:(unsigned long long)arg3 matchedRatio:(double)arg4 keywordType:(unsigned long long)arg5;
+ (id)allClusterIdentifiers;
+ (id)cleanSubject:(id)arg1;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 detectedStartDate:(id)arg2;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 features:(id)arg2;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 features:(id)arg2 datafeatures:(id)arg3;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 keywordFeatures:(id)arg2 datafeatures:(id)arg3;
+ (id)eventTypeForCultureAndLanguageID:(id)arg1;
+ (id)eventTypeForEntertainmentAndLanguageID:(id)arg1;
+ (id)eventTypeForGenericEventAndLanguageID:(id)arg1;
+ (id)eventTypeForMealsAndLanguageID:(id)arg1;
+ (id)eventTypeForMoviesAndLanguageID:(id)arg1;
+ (id)eventTypeForSportAndLanguageID:(id)arg1;
+ (id)fallbackEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 checkForDateInSubject:(bool)arg3;
+ (id)morePreciseEventClassificationTypeBetweenType:(id)arg1 and:(id)arg2;
+ (id)taxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2;
+ (id)taxonomyForLanguageID:(id)arg1 clusterType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_addParent:(id)arg1;
- (void)_addUpperPriorityEventTypeIdentifier:(id)arg1 weight:(id)arg2;
- (double)_hasPriorityOverEventType:(id)arg1;
- (bool)_isAParentOf:(id)arg1;
- (id)_mealClassificationTypeUsingStartDate:(id)arg1;
- (void)addEventPatterns:(id)arg1;
- (id)adjustedEventClassificationTypeWithStartDate:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 dateInSubject:(id)arg3 eventStartDate:(id)arg4 isGeneratedFromSubject:(bool*)arg5;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 isDateInSubject:(bool)arg3;
- (bool)allowGenericKeywordsForLanguage:(id)arg1;
- (id)children;
- (unsigned long long)classificationDepth;
- (id)dateWithoutTime:(id)arg1;
- (id)decoratedTitleFromTitle:(id)arg1 participantName:(id)arg2;
- (int)defaultCumulativeMinutes;
- (double)defaultDuration;
- (int)defaultStartingTimeHour;
- (int)defaultStartingTimeMinutes;
- (id)defaultTitle;
- (id)description;
- (id)genericPatternKeywords;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 language:(id)arg2 patternKeywords:(id)arg3 titleKeywords:(id)arg4 subjectKeywords:(id)arg5 defaultTitle:(id)arg6 titleSenderTemplate:(id)arg7 defaultStartingTimeHour:(int)arg8 defaultStartingTimeMinutes:(int)arg9 defaultDuration:(double)arg10 preferedMeridian:(unsigned long long)arg11 parent:(id)arg12 children:(id)arg13 useForTimeAdjustement:(bool)arg14 minutesBeforeDefaultStartingTime:(double)arg15 minutesAfterDefaultStartingTime:(double)arg16 allDayAllowed:(bool)arg17 useGenericPatternsInClassification:(bool)arg18 movieRelated:(bool)arg19 mealRelated:(bool)arg20 cultureRelated:(bool)arg21 sportRelated:(bool)arg22 fairlyGeneric:(bool)arg23 appointmentRelated:(bool)arg24;
- (bool)isAllDayAllowed;
- (bool)isAppointment;
- (bool)isCultureRelated;
- (bool)isDateWithinRange:(id)arg1;
- (bool)isFairlyGeneric;
- (bool)isHighPriority;
- (bool)isLowPriority;
- (bool)isMealRelated;
- (bool)isMovieRelated;
- (bool)isSportRelated;
- (id)language;
- (double)minutesAfterDefaultStartingTime;
- (double)minutesBeforeDefaultStartingTime;
- (id)parent;
- (id)patternKeywords;
- (unsigned long long)preferedMeridian;
- (bool)prefersTitleSenderDecoration;
- (id)properCasedTitleForTitle:(id)arg1 locale:(id)arg2;
- (bool)questionMarkInString:(id)arg1;
- (void)setAllDayAllowed:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setClassificationDepth:(unsigned long long)arg1;
- (void)setDefaultCumulativeMinutes:(int)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDefaultStartingTimeHour:(int)arg1;
- (void)setDefaultStartingTimeMinutes:(int)arg1;
- (void)setDefaultTitle:(id)arg1;
- (void)setGenericPatternKeywords:(id)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLowPriority:(bool)arg1;
- (void)setMinutesAfterDefaultStartingTime:(double)arg1;
- (void)setMinutesBeforeDefaultStartingTime:(double)arg1;
- (void)setParent:(id)arg1;
- (void)setPatternKeywords:(id)arg1;
- (void)setPreferedMeridian:(unsigned long long)arg1;
- (void)setSubjectKeywords:(id)arg1;
- (void)setTitleKeywords:(id)arg1;
- (void)setTitleSenderTemplate:(id)arg1;
- (void)setUpperPriorityEventTypesIdentifiers:(id)arg1;
- (void)setUseForTimeAdjustement:(bool)arg1;
- (id)subjectKeywords;
- (id)titleKeywords;
- (id)titleSenderTemplate;
- (id)upperPriorityEventTypesIdentifiers;
- (bool)useForTimeAdjustement;

@end
