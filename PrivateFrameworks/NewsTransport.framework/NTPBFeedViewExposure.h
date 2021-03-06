/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewExposure : PBCodable <NSCopying> {
    BOOL  _adSupportedChannel;
    BOOL  _cameFromGroup;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _countOfTotalGroupExposures;
    int  _countOfTotalGroupsExposed;
    NSString * _creativeId;
    int  _feedCellHostType;
    int  _feedCellSection;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    int  _groupType;
    struct { 
        unsigned int countOfTotalGroupExposures : 1; 
        unsigned int countOfTotalGroupsExposed : 1; 
        unsigned int feedCellHostType : 1; 
        unsigned int feedCellSection : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int presentationReason : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int cameFromGroup : 1; 
        unsigned int isNewUserToFeed : 1; 
        unsigned int isPaidSubscriberToFeed : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    BOOL  _isNewUserToFeed;
    BOOL  _isPaidSubscriberToFeed;
    BOOL  _isSubscribedToGroupFeed;
    BOOL  _isUserSubscribedToFeed;
    int  _presentationReason;
    NSString * _presentationReasonSearchString;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    NSString * _sourceChannelId;
    NSString * _userActivityType;
    NSString * _viewFrameInScreen;
}

@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) BOOL cameFromGroup;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int countOfTotalGroupExposures;
@property (nonatomic) int countOfTotalGroupsExposed;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) int feedCellSection;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasCameFromGroup;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCountOfTotalGroupExposures;
@property (nonatomic) BOOL hasCountOfTotalGroupsExposed;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedCellSection;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsNewUserToFeed;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasPresentationReason;
@property (nonatomic, readonly) BOOL hasPresentationReasonSearchString;
@property (nonatomic, readonly) BOOL hasReferringSourceApplication;
@property (nonatomic, readonly) BOOL hasReferringUrl;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasUserActivityType;
@property (nonatomic, readonly) BOOL hasViewFrameInScreen;
@property (nonatomic) BOOL isNewUserToFeed;
@property (nonatomic) BOOL isPaidSubscriberToFeed;
@property (nonatomic) BOOL isSubscribedToGroupFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic) int presentationReason;
@property (nonatomic, retain) NSString *presentationReasonSearchString;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *userActivityType;
@property (nonatomic, retain) NSString *viewFrameInScreen;

- (void).cxx_destruct;
- (int)StringAsFeedCellHostType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPresentationReason:(id)arg1;
- (BOOL)adSupportedChannel;
- (BOOL)cameFromGroup;
- (id)campaignId;
- (id)campaignType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfTotalGroupExposures;
- (int)countOfTotalGroupsExposed;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)feedCellSection;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasAdSupportedChannel;
- (BOOL)hasCameFromGroup;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCountOfTotalGroupExposures;
- (BOOL)hasCountOfTotalGroupsExposed;
- (BOOL)hasCreativeId;
- (BOOL)hasFeedCellHostType;
- (BOOL)hasFeedCellSection;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasGroupType;
- (BOOL)hasIsNewUserToFeed;
- (BOOL)hasIsPaidSubscriberToFeed;
- (BOOL)hasIsSubscribedToGroupFeed;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasPresentationReason;
- (BOOL)hasPresentationReasonSearchString;
- (BOOL)hasReferringSourceApplication;
- (BOOL)hasReferringUrl;
- (BOOL)hasSourceChannelId;
- (BOOL)hasUserActivityType;
- (BOOL)hasViewFrameInScreen;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNewUserToFeed;
- (BOOL)isPaidSubscriberToFeed;
- (BOOL)isSubscribedToGroupFeed;
- (BOOL)isUserSubscribedToFeed;
- (void)mergeFrom:(id)arg1;
- (int)presentationReason;
- (id)presentationReasonAsString:(int)arg1;
- (id)presentationReasonSearchString;
- (BOOL)readFrom:(id)arg1;
- (id)referringSourceApplication;
- (id)referringUrl;
- (void)setAdSupportedChannel:(BOOL)arg1;
- (void)setCameFromGroup:(BOOL)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCountOfTotalGroupExposures:(int)arg1;
- (void)setCountOfTotalGroupsExposed:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setFeedCellSection:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasAdSupportedChannel:(BOOL)arg1;
- (void)setHasCameFromGroup:(BOOL)arg1;
- (void)setHasCountOfTotalGroupExposures:(BOOL)arg1;
- (void)setHasCountOfTotalGroupsExposed:(BOOL)arg1;
- (void)setHasFeedCellHostType:(BOOL)arg1;
- (void)setHasFeedCellSection:(BOOL)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsNewUserToFeed:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setHasIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasPresentationReason:(BOOL)arg1;
- (void)setIsNewUserToFeed:(BOOL)arg1;
- (void)setIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setPresentationReason:(int)arg1;
- (void)setPresentationReasonSearchString:(id)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setViewFrameInScreen:(id)arg1;
- (id)sourceChannelId;
- (id)userActivityType;
- (id)viewFrameInScreen;
- (void)writeTo:(id)arg1;

@end
