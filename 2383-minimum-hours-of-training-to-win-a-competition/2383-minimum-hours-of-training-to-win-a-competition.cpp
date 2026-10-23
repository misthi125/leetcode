class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sum=0;
        for(int i=0;i<energy.size();i++){
            if(energy[i]<initialEnergy && experience[i]<initialExperience){
                initialExperience+=experience[i];
                initialEnergy-=energy[i];
            }
            else{
                if(experience[i]>=initialExperience){
                    sum+=experience[i]-initialExperience+1;
                    initialExperience+=experience[i]-initialExperience+1;
                }
                if(energy[i]>=initialEnergy) {
                    sum+=energy[i]-initialEnergy+1;
                    initialEnergy+=energy[i]-initialEnergy+1;
                }
                i--;
            }
        }
        return sum;
    }
};