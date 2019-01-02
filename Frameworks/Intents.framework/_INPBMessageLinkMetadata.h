/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessageLinkMetadata : PBCodable <NSCopying, NSSecureCoding, _INPBMessageLinkMetadata> {
    NSString * _albumArtist;
    NSString * _albumName;
    NSString * _artistGenre;
    NSString * _artistName;
    NSString * _audioBookAuthor;
    NSString * _audioBookName;
    NSString * _audioBookNarrator;
    NSString * _bookAuthor;
    NSString * _bookName;
    NSString * _creator;
    struct { 
        unsigned int linkMediaType : 1; 
    }  _has;
    NSString * _iTunesStoreFrontIdentifier;
    NSString * _iTunesStoreIdentifier;
    NSArray * _iconURLs;
    NSArray * _imageURLs;
    NSString * _itemType;
    int  _linkMediaType;
    NSString * _movieGenre;
    NSString * _movieName;
    NSString * _musicVideoArtist;
    NSString * _musicVideoName;
    NSString * _originalURL;
    NSString * _playlistCurator;
    NSString * _playlistName;
    NSString * _podcastArtist;
    NSString * _podcastEpisodeArtist;
    NSString * _podcastEpisodeName;
    NSString * _podcastEpisodePodcastName;
    _INPBDateTime * _podcastEpisodeReleaseDate;
    NSString * _podcastName;
    NSString * _radioCurator;
    NSString * _radioName;
    NSString * _siteName;
    NSString * _softwareGenre;
    NSString * _softwareName;
    NSString * _softwarePlatform;
    NSString * _songAlbum;
    NSString * _songArtist;
    NSString * _songTitle;
    NSString * _summary;
    NSString * _title;
    NSString * _tvEpisodeEpisodeName;
    NSString * _tvEpisodeGenre;
    NSString * _tvEpisodeSeasonName;
    NSString * _tvSeasonGenre;
    NSString * _tvSeasonName;
}

@property (nonatomic, copy) NSString *albumArtist;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistGenre;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *audioBookAuthor;
@property (nonatomic, copy) NSString *audioBookName;
@property (nonatomic, copy) NSString *audioBookNarrator;
@property (nonatomic, copy) NSString *bookAuthor;
@property (nonatomic, copy) NSString *bookName;
@property (nonatomic, copy) NSString *creator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlbumArtist;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasArtistGenre;
@property (nonatomic, readonly) bool hasArtistName;
@property (nonatomic, readonly) bool hasAudioBookAuthor;
@property (nonatomic, readonly) bool hasAudioBookName;
@property (nonatomic, readonly) bool hasAudioBookNarrator;
@property (nonatomic, readonly) bool hasBookAuthor;
@property (nonatomic, readonly) bool hasBookName;
@property (nonatomic, readonly) bool hasCreator;
@property (nonatomic, readonly) bool hasITunesStoreFrontIdentifier;
@property (nonatomic, readonly) bool hasITunesStoreIdentifier;
@property (nonatomic, readonly) bool hasItemType;
@property (nonatomic) bool hasLinkMediaType;
@property (nonatomic, readonly) bool hasMovieGenre;
@property (nonatomic, readonly) bool hasMovieName;
@property (nonatomic, readonly) bool hasMusicVideoArtist;
@property (nonatomic, readonly) bool hasMusicVideoName;
@property (nonatomic, readonly) bool hasOriginalURL;
@property (nonatomic, readonly) bool hasPlaylistCurator;
@property (nonatomic, readonly) bool hasPlaylistName;
@property (nonatomic, readonly) bool hasPodcastArtist;
@property (nonatomic, readonly) bool hasPodcastEpisodeArtist;
@property (nonatomic, readonly) bool hasPodcastEpisodeName;
@property (nonatomic, readonly) bool hasPodcastEpisodePodcastName;
@property (nonatomic, readonly) bool hasPodcastEpisodeReleaseDate;
@property (nonatomic, readonly) bool hasPodcastName;
@property (nonatomic, readonly) bool hasRadioCurator;
@property (nonatomic, readonly) bool hasRadioName;
@property (nonatomic, readonly) bool hasSiteName;
@property (nonatomic, readonly) bool hasSoftwareGenre;
@property (nonatomic, readonly) bool hasSoftwareName;
@property (nonatomic, readonly) bool hasSoftwarePlatform;
@property (nonatomic, readonly) bool hasSongAlbum;
@property (nonatomic, readonly) bool hasSongArtist;
@property (nonatomic, readonly) bool hasSongTitle;
@property (nonatomic, readonly) bool hasSummary;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTvEpisodeEpisodeName;
@property (nonatomic, readonly) bool hasTvEpisodeGenre;
@property (nonatomic, readonly) bool hasTvEpisodeSeasonName;
@property (nonatomic, readonly) bool hasTvSeasonGenre;
@property (nonatomic, readonly) bool hasTvSeasonName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iTunesStoreFrontIdentifier;
@property (nonatomic, copy) NSString *iTunesStoreIdentifier;
@property (nonatomic, copy) NSArray *iconURLs;
@property (nonatomic, readonly) unsigned long long iconURLsCount;
@property (nonatomic, copy) NSArray *imageURLs;
@property (nonatomic, readonly) unsigned long long imageURLsCount;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic) int linkMediaType;
@property (nonatomic, copy) NSString *movieGenre;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, copy) NSString *musicVideoArtist;
@property (nonatomic, copy) NSString *musicVideoName;
@property (nonatomic, copy) NSString *originalURL;
@property (nonatomic, copy) NSString *playlistCurator;
@property (nonatomic, copy) NSString *playlistName;
@property (nonatomic, copy) NSString *podcastArtist;
@property (nonatomic, copy) NSString *podcastEpisodeArtist;
@property (nonatomic, copy) NSString *podcastEpisodeName;
@property (nonatomic, copy) NSString *podcastEpisodePodcastName;
@property (nonatomic, retain) _INPBDateTime *podcastEpisodeReleaseDate;
@property (nonatomic, copy) NSString *podcastName;
@property (nonatomic, copy) NSString *radioCurator;
@property (nonatomic, copy) NSString *radioName;
@property (nonatomic, copy) NSString *siteName;
@property (nonatomic, copy) NSString *softwareGenre;
@property (nonatomic, copy) NSString *softwareName;
@property (nonatomic, copy) NSString *softwarePlatform;
@property (nonatomic, copy) NSString *songAlbum;
@property (nonatomic, copy) NSString *songArtist;
@property (nonatomic, copy) NSString *songTitle;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *tvEpisodeEpisodeName;
@property (nonatomic, copy) NSString *tvEpisodeGenre;
@property (nonatomic, copy) NSString *tvEpisodeSeasonName;
@property (nonatomic, copy) NSString *tvSeasonGenre;
@property (nonatomic, copy) NSString *tvSeasonName;

- (void).cxx_destruct;
- (int)StringAsLinkMediaType:(id)arg1;
- (void)addIconURL:(id)arg1;
- (void)addImageURL:(id)arg1;
- (id)albumArtist;
- (id)albumName;
- (id)artistGenre;
- (id)artistName;
- (id)audioBookAuthor;
- (id)audioBookName;
- (id)audioBookNarrator;
- (id)bookAuthor;
- (id)bookName;
- (void)clearIconURLs;
- (void)clearImageURLs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creator;
- (id)dictionaryRepresentation;
- (bool)hasAlbumArtist;
- (bool)hasAlbumName;
- (bool)hasArtistGenre;
- (bool)hasArtistName;
- (bool)hasAudioBookAuthor;
- (bool)hasAudioBookName;
- (bool)hasAudioBookNarrator;
- (bool)hasBookAuthor;
- (bool)hasBookName;
- (bool)hasCreator;
- (bool)hasITunesStoreFrontIdentifier;
- (bool)hasITunesStoreIdentifier;
- (bool)hasItemType;
- (bool)hasLinkMediaType;
- (bool)hasMovieGenre;
- (bool)hasMovieName;
- (bool)hasMusicVideoArtist;
- (bool)hasMusicVideoName;
- (bool)hasOriginalURL;
- (bool)hasPlaylistCurator;
- (bool)hasPlaylistName;
- (bool)hasPodcastArtist;
- (bool)hasPodcastEpisodeArtist;
- (bool)hasPodcastEpisodeName;
- (bool)hasPodcastEpisodePodcastName;
- (bool)hasPodcastEpisodeReleaseDate;
- (bool)hasPodcastName;
- (bool)hasRadioCurator;
- (bool)hasRadioName;
- (bool)hasSiteName;
- (bool)hasSoftwareGenre;
- (bool)hasSoftwareName;
- (bool)hasSoftwarePlatform;
- (bool)hasSongAlbum;
- (bool)hasSongArtist;
- (bool)hasSongTitle;
- (bool)hasSummary;
- (bool)hasTitle;
- (bool)hasTvEpisodeEpisodeName;
- (bool)hasTvEpisodeGenre;
- (bool)hasTvEpisodeSeasonName;
- (bool)hasTvSeasonGenre;
- (bool)hasTvSeasonName;
- (unsigned long long)hash;
- (id)iTunesStoreFrontIdentifier;
- (id)iTunesStoreIdentifier;
- (id)iconURLAtIndex:(unsigned long long)arg1;
- (id)iconURLs;
- (unsigned long long)iconURLsCount;
- (id)imageURLAtIndex:(unsigned long long)arg1;
- (id)imageURLs;
- (unsigned long long)imageURLsCount;
- (bool)isEqual:(id)arg1;
- (id)itemType;
- (int)linkMediaType;
- (id)linkMediaTypeAsString:(int)arg1;
- (id)movieGenre;
- (id)movieName;
- (id)musicVideoArtist;
- (id)musicVideoName;
- (id)originalURL;
- (id)playlistCurator;
- (id)playlistName;
- (id)podcastArtist;
- (id)podcastEpisodeArtist;
- (id)podcastEpisodeName;
- (id)podcastEpisodePodcastName;
- (id)podcastEpisodeReleaseDate;
- (id)podcastName;
- (id)radioCurator;
- (id)radioName;
- (bool)readFrom:(id)arg1;
- (void)setAlbumArtist:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistGenre:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAudioBookAuthor:(id)arg1;
- (void)setAudioBookName:(id)arg1;
- (void)setAudioBookNarrator:(id)arg1;
- (void)setBookAuthor:(id)arg1;
- (void)setBookName:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setHasLinkMediaType:(bool)arg1;
- (void)setITunesStoreFrontIdentifier:(id)arg1;
- (void)setITunesStoreIdentifier:(id)arg1;
- (void)setIconURLs:(id)arg1;
- (void)setImageURLs:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setLinkMediaType:(int)arg1;
- (void)setMovieGenre:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setMusicVideoArtist:(id)arg1;
- (void)setMusicVideoName:(id)arg1;
- (void)setOriginalURL:(id)arg1;
- (void)setPlaylistCurator:(id)arg1;
- (void)setPlaylistName:(id)arg1;
- (void)setPodcastArtist:(id)arg1;
- (void)setPodcastEpisodeArtist:(id)arg1;
- (void)setPodcastEpisodeName:(id)arg1;
- (void)setPodcastEpisodePodcastName:(id)arg1;
- (void)setPodcastEpisodeReleaseDate:(id)arg1;
- (void)setPodcastName:(id)arg1;
- (void)setRadioCurator:(id)arg1;
- (void)setRadioName:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setSoftwareGenre:(id)arg1;
- (void)setSoftwareName:(id)arg1;
- (void)setSoftwarePlatform:(id)arg1;
- (void)setSongAlbum:(id)arg1;
- (void)setSongArtist:(id)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTvEpisodeEpisodeName:(id)arg1;
- (void)setTvEpisodeGenre:(id)arg1;
- (void)setTvEpisodeSeasonName:(id)arg1;
- (void)setTvSeasonGenre:(id)arg1;
- (void)setTvSeasonName:(id)arg1;
- (id)siteName;
- (id)softwareGenre;
- (id)softwareName;
- (id)softwarePlatform;
- (id)songAlbum;
- (id)songArtist;
- (id)songTitle;
- (id)summary;
- (id)title;
- (id)tvEpisodeEpisodeName;
- (id)tvEpisodeGenre;
- (id)tvEpisodeSeasonName;
- (id)tvSeasonGenre;
- (id)tvSeasonName;
- (void)writeTo:(id)arg1;

@end
