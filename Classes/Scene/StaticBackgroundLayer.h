//
//  StaticBackgroundLayer.h
//  WonkyBird
//
//  Created by Cam Saul on 3/3/14.
//
//

#ifndef WONKYBIRD_STATICBACKGROUNDLAYER_H
#define WONKYBIRD_STATICBACKGROUNDLAYER_H

class StaticBackgroundLayer : public CCLayer {
public:
	StaticBackgroundLayer();
	
	CCSprite* DayBackground();
	CCSprite* NightBackground();
	CCSprite* ToucanBackground();
	CCSprite* CurrentBackground();
private:
	unique_ptr<CCSprite> dayBackground_;
	unique_ptr<CCSprite> nightBackground_;
	unique_ptr<CCSprite> toucanBackground_;
	
	unique_ptr<CCSprite> AddBackground(const string& filename);
};

#endif
