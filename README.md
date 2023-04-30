# CitrusHack
Team members: Jason, Nathan, Alex, Derrick

Goal: 

    Our team is focusing on the theme of the global community track. 
    
    Primarily, we would like to address the issue of physical health within a community by making an interactive interface for users of which will curate an exercise regimen based on their fitness level, wellness goals, and accessibility to equipment, by pulling from a database of exercises. 
    
    The exercises will be categorized based on the the type of movement, the equipment needed for the exercise, and of course the exercise itself. Each tab the user opens will have metadata about the category/exercise which includes: a description of the exercise, the fitness level advised to perform the exercise, etc (other metadata TBD). 

Visualization:

    PUSH
    |_____ Bench
    |_____ Dumbbell
    |_____ Push-up
            |______ Pike
            |______ Incline
            |______ Diamond
    
    PULL
    |_____ ...
    |_____ ...
    |_____ ...

    LEGS
    |_____ ...
    |_____ ...
    |_____ ...

    CARDIO
    |_____ ...
    |_____ ...
    |_____ ...

    class Exercise {
        string description;
        int level;
        string name;
        ...
    }