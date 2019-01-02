/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRNowPlayingInfoProtobuf : PBCodable <NSCopying> {
    NSString * _album;
    NSString * _artist;
    NSData * _artworkDataDigest;
    double  _duration;
    double  _elapsedTime;
    struct { 
        unsigned int duration : 1; 
        unsigned int elapsedTime : 1; 
        unsigned int radioStationIdentifier : 1; 
        unsigned int storeAdamID : 1; 
        unsigned int timestamp : 1; 
        unsigned int uniqueIdentifier : 1; 
        unsigned int playbackRate : 1; 
        unsigned int preferredPlaybackRate : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int isAdvertisement : 1; 
        unsigned int isAlwaysLive : 1; 
        unsigned int isExplicitTrack : 1; 
        unsigned int isMusicApp : 1; 
    }  _has;
    bool  _isAdvertisement;
    bool  _isAlwaysLive;
    bool  _isExplicitTrack;
    bool  _isMusicApp;
    float  _playbackRate;
    float  _preferredPlaybackRate;
    NSString * _radioStationHash;
    long long  _radioStationIdentifier;
    NSString * _radioStationName;
    int  _repeatMode;
    int  _shuffleMode;
    long long  _storeAdamID;
    double  _timestamp;
    NSString * _title;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSData *artworkDataDigest;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) bool hasAlbum;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasArtworkDataDigest;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasElapsedTime;
@property (nonatomic) bool hasIsAdvertisement;
@property (nonatomic) bool hasIsAlwaysLive;
@property (nonatomic) bool hasIsExplicitTrack;
@property (nonatomic) bool hasIsMusicApp;
@property (nonatomic) bool hasPlaybackRate;
@property (nonatomic) bool hasPreferredPlaybackRate;
@property (nonatomic, readonly) bool hasRadioStationHash;
@property (nonatomic) bool hasRadioStationIdentifier;
@property (nonatomic, readonly) bool hasRadioStationName;
@property (nonatomic) bool hasRepeatMode;
@property (nonatomic) bool hasShuffleMode;
@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasUniqueIdentifier;
@property (nonatomic) bool isAdvertisement;
@property (nonatomic) bool isAlwaysLive;
@property (nonatomic) bool isExplicitTrack;
@property (nonatomic) bool isMusicApp;
@property (nonatomic) float playbackRate;
@property (nonatomic) float preferredPlaybackRate;
@property (nonatomic, retain) NSString *radioStationHash;
@property (nonatomic) long long radioStationIdentifier;
@property (nonatomic, retain) NSString *radioStationName;
@property (nonatomic) int repeatMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned long long uniqueIdentifier;

- (void).cxx_destruct;
- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (id)album;
- (id)artist;
- (id)artworkDataDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)elapsedTime;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasArtworkDataDigest;
- (bool)hasDuration;
- (bool)hasElapsedTime;
- (bool)hasIsAdvertisement;
- (bool)hasIsAlwaysLive;
- (bool)hasIsExplicitTrack;
- (bool)hasIsMusicApp;
- (bool)hasPlaybackRate;
- (bool)hasPreferredPlaybackRate;
- (bool)hasRadioStationHash;
- (bool)hasRadioStationIdentifier;
- (bool)hasRadioStationName;
- (bool)hasRepeatMode;
- (bool)hasShuffleMode;
- (bool)hasStoreAdamID;
- (bool)hasTimestamp;
- (bool)hasTitle;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (bool)isMusicApp;
- (void)mergeFrom:(id)arg1;
- (float)playbackRate;
- (float)preferredPlaybackRate;
- (id)radioStationHash;
- (long long)radioStationIdentifier;
- (id)radioStationName;
- (bool)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkDataDigest:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasElapsedTime:(bool)arg1;
- (void)setHasIsAdvertisement:(bool)arg1;
- (void)setHasIsAlwaysLive:(bool)arg1;
- (void)setHasIsExplicitTrack:(bool)arg1;
- (void)setHasIsMusicApp:(bool)arg1;
- (void)setHasPlaybackRate:(bool)arg1;
- (void)setHasPreferredPlaybackRate:(bool)arg1;
- (void)setHasRadioStationIdentifier:(bool)arg1;
- (void)setHasRepeatMode:(bool)arg1;
- (void)setHasShuffleMode:(bool)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUniqueIdentifier:(bool)arg1;
- (void)setIsAdvertisement:(bool)arg1;
- (void)setIsAlwaysLive:(bool)arg1;
- (void)setIsExplicitTrack:(bool)arg1;
- (void)setIsMusicApp:(bool)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPreferredPlaybackRate:(float)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationIdentifier:(long long)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(unsigned long long)arg1;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (long long)storeAdamID;
- (double)timestamp;
- (id)title;
- (unsigned long long)uniqueIdentifier;
- (bool)validateUniqueIdentifier:(id*)arg1 error:(id*)arg2;
- (void)writeTo:(id)arg1;

@end