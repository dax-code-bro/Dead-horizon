# TEAM ALPHA — Game Design Document

## Overview
- **Title:** Team Alpha
- **Setting:** 1991
- **Genre:** Tactical military shooter
- **Engine:** Unreal Engine
- **Part of:** Dead Horizon series

## Story Premise
On the surface, everything is peaceful among nations. But the government suspects Russia has been acting strange. They're right — Russia has been secretly making deals with Germany to take out America. Team Alpha is sent on what starts as recon but quickly becomes a fight for national security.

---

## CHARACTERS

### Carlos "Spike" Rodriguez — Point Man
- **Age:** Early 30s (born ~1958-1961)
- **Role:** Point Man — first in after the breacher, leads the team through
- **Codename Origin:** During a classified mission, he shot a wire causing a spike to fall and kill a terrorist, saving 200,000 lives
- **Arc:** After General Hancock's betrayal, his entire face is burned off and he suffers major third-degree burns on his arm (the arm he rested on Marcus's chest trying to feel his heartbeat). He is visibly and mentally scarred — PTSD, survivor's guilt, trust destroyed. He becomes a man driven by revenge and justice.

### Marcus Cole — Breacher
- **Age:** Mid-to-late 60s (born ~1923-1926)
- **Role:** Breacher — first through the door every time, leads from the front
- **Background:** A legendary, well-known veteran. Fought in WWII, Korea, Vietnam, Cold War operations. 40+ years of combat experience. When he walks into a room, everyone knows who he is.
- **Mentor to Spike:** Taught Carlos everything — how to think, fight, survive
- **Death:** Murdered by General Hancock — shot in the head during the betrayal scene when the team delivers top-secret Russian documents. No warning, no chance to react.

### John (Last name TBD) — Rear Guard / Hacker
- **Age:** 25 (born ~1966)
- **Role:** Rear Guard in formation, also the team's hacker (stationed at the back desk with computers and documents)
- **Personality:** The heart of the team. Everyone's little brother. Likable, genuine. The whole squad naturally protects him — not because he's weak, but because there's something about him that brings it out in people. Like how a football team protects the one kid who gets bullied, except John doesn't get bullied.
- **Nickname:** "Little Johnny" by the team
- **Arc:** Gets fatally injured during the game, nearly dies, ends up in a wheelchair permanently. He survives but his career and mobility are gone at 25.

### Molotov — Mid Guard / Flank Security
- **Real Name:** Unknown — no full name or surname ever revealed, only codename
- **Role:** Mid Guard — watches the angles nobody else is looking at, covers flanks
- **Personality:** An unrested, mysterious member. Constantly switching sides throughout the game. Nobody knows why he's still on the team. The wildcard who keeps everyone on edge.
- **Location at base:** Always sitting by the clue board, staring up at it
- **Irony:** The guy nobody trusts is the one trusted to watch their backs

### General Hancock — Commanding Officer / Antagonist
- **Role:** The team's commanding officer — the authority they trust
- **Betrayal:** Five missions before the last mission, when the team turns in top-secret Russian paperwork, Hancock immediately pulls a pistol, shoots Marcus in the head, shoots Carlos in the stomach. His men pour gasoline on Carlos as Hancock throws a lighter and walks away cold.
- **Motivation:** Connected to the Russia-Germany alliance (details TBD)
- **Special Items:** Gold plated pistol called "Hancock's Right Hand Man" — lootable in the good ending

---

## TEAM FORMATION (Stack Order)
1. **Marcus** — Breacher (front, opens the door)
2. **Spike** — Point Man (right behind Marcus)
3. **Molotov** — Mid Guard (covers flanks)
4. **John** — Rear Guard (watches the back)

---

## GAMEPLAY SYSTEMS

### Leaderboard / Scoring System
- Multiple SWAT teams compete on a leaderboard at the station
- Added by the system to bring humor and humbleness, to get everyone's mind off what they do every day
- **Scoring criteria:**
  - No civilians killed
  - No SWAT members injured
  - Perfect score possible per mission
- **At game start:** The rival team is beating Team Alpha by 25 points
- Rival team details TBD

### Item Request System
- During free roam at base, teammates may bring up item requests in conversation
- Items are found during missions
- **Examples:**
  - Molotov requests a specific brand of cigarettes
  - John requests a few dollars
- Optional — player chooses whether to talk to teammates and may or may not get the request dialogue

### Loadout System
- **Locker room** at the base contains the loadout changer
- **Starting weapons:** AK-47, M4, M-16 (all with mid-tier attachments)
- **Progression:** Complete missions to unlock new guns and attachments
- **Currency:** Find money during missions to buy unlocked guns and attachments
- **Gun skins:** Unlockable cosmetic skins
- **Special variants:** Unique named versions of weapons (e.g., "Hancock's Right Hand Man" — gold plated pistol)
- **Vehicles:** Buy tanks and jeeps for wide roam missions

### Multiple Endings

#### Good Ending
- Spike grabs a landmine and throws it at Hancock
- Hancock slowly looks forward — sees it coming
- Landmine hits the ground — massive explosion — Hancock is dead
- Player can loot his body for:
  - **Hancock's Right Hand Man** (gold plated pistol)
  - **Hancock's outfit**

#### Bad Ending
- Hancock has extra bullets, shoots Spike in both legs
- Spike falls to his knees
- Hancock beats him brutally
- Spike looks up, blood dripping from his mouth, gets back on his knees
- Hancock puts a gun to his head and pulls the trigger
- Hancock walks away cold — mirrors Marcus's murder exactly

---

## BASE / HUB — The Hangar

### Layout
A giant airplane hangar serving as Team Alpha's headquarters.

**Ground Floor:**
- Open hangar space
- Car being worked on
- Guards patrolling everywhere

**Second Floor:**
- Staircase leading up to a balcony overlooking the ground floor

### Rooms
- **Main Room (Operations Hub)**
  - Giant clue board — where you start missions
  - Giant table with scattered documents
  - Car being worked on
  - **Back desk** — John's station (computer, documents everywhere — hacker setup)
  - **Front desk corner** — Marcus's spot (at his computer, working... or sometimes playing Call of Duty)
  - **By the clue board** — Molotov's spot (sitting, staring up at it)
- **Barracks** — sleeping/resting quarters
- **Kitchen** — mess hall area
- **Briefing Room** — formal meetings (President scene, etc.)
- **Locker Room** — loadout changer inside
- **General Hancock's Room** — private office

### Free Roam Rules
- Boundary marked by sandbags — can't go far from the base
- Distant textures are loaded beyond sandbags (looks real)
- If player glitches past the barrier: 10 second countdown to return or auto-kill and respawn

### Character Locations (Fixed)
- **John** — always at the back desk
- **Marcus** — always at the front desk corner
- **Molotov** — always by the clue board

---

## MISSIONS

### Mission 1 — The Russian Facility

**Opening Cutscene:**
- Marcus and Spike on a hill behind a rock, looking through binoculars at a Russian facility
- Marcus asks where John is
- Spike points up to a sniper position — John's glint is completely visible
- Spike radios: "I told you to use binoculars, you look like the sun up there"
- John responds: "OK Porcupine"
- Molotov sneaks up from behind: "Where we headed?"
- They spot a massive atomic bomb being loaded onto a B2 bomber — the loading team takes a break because it's so heavy
- Molotov: "Bingo"
- Team moves left, camera transitions to first person — player takes control

**Stealth Section:**
- Sneak to the back of the facility
- Peek through a door — German officer talking with a Russian man
- Team agrees: John takes the right, Spike takes the left
- Synchronized hand-to-hand takedown:
  - John does a knife trick, nearly drops the knife, catches it before it clangs on the floor, drives it through the German's neck
  - Spike chokes out the Russian before he can react

**Navigating the Facility:**
- Team moves through the facility
- Slow motion: a knife drops from a balcony, clangs on the floor
- Cover is blown — enemies rush toward the sound
- Spike cocks his M-16 — gameplay kicks in, player fights through enemies

**The B2 Bomber Sequence:**
- Enemies reach the cockpit, door is closing
- Spike grabs the ledge at the last second
- German officer tries to kick his hand off
- Spike grabs his leg, pulls him off — he falls
- Door about to close (would cut Spike in half)
- Spike crawls up just in time
- Takes down the copilot and a guard inside the plane
- Forces the pilot out at gunpoint
- Spike takes control of the B2 bomber

**Escape:**
- Spike circles back, lands to pick up the team
- Marcus, John, Molotov get on
- Spike takes off before anti-aircraft defenses can activate

**In-Flight Dialogue:**
- Banter about Spike stealing a bomber
- Marcus: "You even got a license for this thing?"
- Molotov concerned about the nuclear warhead behind him
- John joking about how the General will react
- Radio confirms General Hancock is waiting on site

**Arrival:**
- B2 lands at the airfield
- General Hancock waiting on the tarmac
- Hancock impressed but controlled: "I asked you to gather intel on a facility. You brought me back their plane."
- Hancock to Marcus privately: "Your boy did good up there."
- Marcus: "He's not my boy, sir. He's my point man."
- Orders debrief in thirty minutes

**Cutscene — Briefing Room:**
- Camera follows Spike walking into facility, zooms into his black gear on his chest — cut to black
- Briefing room: Spike, Marcus, John, Molotov, four officials, and the President
- Marcus shakes the President's hand, everyone sits
- An official throws documents onto the table
- Marcus reads the folder — his face drops
- Calls Spike by his real name "Carlos" — the room tenses, nobody calls him that
- Slides the folder to Spike
- First person view: Spike reads the documents — photo of a Russian general shaking hands with a German in the corner of the folder
- Contents reveal: Russia has been secretly making deals with Germany to take out America
- Discussion erupts — everyone talking over each other about whether to declare war
- President SLAMS his hand on the table: "Marcus. I am just trying to know if I need to declare war. This isn't some fairytale where you can just fix everything. This is real world stuff."
- President storms off
- Marcus, frustrated, tells everyone to follow him

**Post-Mission:**
- Player enters free roam at the base (the hangar)
- Can talk to teammates, explore, change loadout, check leaderboard

### Mission 2 — TBD
- Started from the clue board in the main room
- Molotov says "Good choice" when you select it

---

## IMPORTANT NOTES
- **No real-world people** — all characters are fictional to avoid misrepresentation
- **Fictional nations/leaders** — no real politicians, generals, or military figures
- All locations and events are inspired by the era but entirely fictional

---

*Document will be updated as more missions and details are developed.*
