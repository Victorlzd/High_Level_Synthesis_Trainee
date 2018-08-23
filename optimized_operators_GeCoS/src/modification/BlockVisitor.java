package modification;

import fr.irisa.cairn.gecos.model.tools.visitors.GecosBlocksDefaultVisitor;
import gecos.blocks.CompositeBlock;

public class BlockVisitor extends GecosBlocksDefaultVisitor{
	
	public void visitCompositeBlock(CompositeBlock c)
	{
		System.out.println("\n\n"+c);
		System.out.println(c.getChildren().get(0));
		super.visitCompositeBlock(c);
	}
	
}
