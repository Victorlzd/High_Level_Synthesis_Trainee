package modification;


import fr.irisa.cairn.gecos.model.tools.visitors.GecosBlocksInstructionsDefaultVisitor;
import gecos.instrs.*;

public class Visitor_op_replacer extends GecosBlocksInstructionsDefaultVisitor{

	@Override
	public void visitGenericInstruction(GenericInstruction g) 
	{
		if(g.getName().equals(ArithmeticOperator.MUL.getLiteral()))
			Mul_replacer.replace(g);
		if(g.getName().equals(ArithmeticOperator.DIV.getLiteral()))
			Div_replacer.replace(g);
		
		super.visitGenericInstruction(g);
	}
	
	
}